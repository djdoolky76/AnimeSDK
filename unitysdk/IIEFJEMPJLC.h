#pragma once
#include "unitysdk/unitysdk.h"
class FOALNJOLMNB;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }

#define IIEFJEMPJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1642BF90)
#define IIEFJEMPJLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1642BFC0)
#define IIEFJEMPJLC_MAAFBDPKDHE_OFFSET UNITYSDK_OFFSET(0x1642C410)
#define IIEFJEMPJLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1642C000)

inline static constexpr unsigned int IIEFJEMPJLC_TypeDefinitionIndex = 53896;

	class IIEFJEMPJLC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FOALNJOLMNB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FOALNJOLMNB*))((::PBYTE)hIl2Cpp + IIEFJEMPJLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEFJEMPJLC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEFJEMPJLC_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void MAAFBDPKDHE(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + IIEFJEMPJLC_MAAFBDPKDHE_OFFSET))(a1);
		}

	};
