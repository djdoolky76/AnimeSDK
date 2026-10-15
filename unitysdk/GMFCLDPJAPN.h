#pragma once
#include "unitysdk/unitysdk.h"
class KMONGMMGNPO;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define GMFCLDPJAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACB920)
#define GMFCLDPJAPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ACB950)
#define GMFCLDPJAPN__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15ACBB30)
#define GMFCLDPJAPN__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x15ACBB40)

inline static constexpr unsigned int GMFCLDPJAPN_TypeDefinitionIndex = 52789;

	class GMFCLDPJAPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KMONGMMGNPO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KMONGMMGNPO*))((::PBYTE)hIl2Cpp + GMFCLDPJAPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFCLDPJAPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFCLDPJAPN__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GMFCLDPJAPN__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
