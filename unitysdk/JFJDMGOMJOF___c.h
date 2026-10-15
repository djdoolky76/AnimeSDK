#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJDMGOMJOF;
namespace System { class Object; }

#define JFJDMGOMJOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF230)
#define JFJDMGOMJOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF270)
#define JFJDMGOMJOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6FF280)

inline static constexpr unsigned int JFJDMGOMJOF___c_TypeDefinitionIndex = 28743;

	class JFJDMGOMJOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFJDMGOMJOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF___C_CTOR_OFFSET))(this);
		}

		::JFJDMGOMJOF* __cctor_b__28_0()
		{
			return ((::JFJDMGOMJOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
