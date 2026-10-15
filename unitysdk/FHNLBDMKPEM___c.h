#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNLBDMKPEM;
namespace System { class Object; }

#define FHNLBDMKPEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392C90)
#define FHNLBDMKPEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E392CD0)
#define FHNLBDMKPEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E392CE0)

inline static constexpr unsigned int FHNLBDMKPEM___c_TypeDefinitionIndex = 29435;

	class FHNLBDMKPEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNLBDMKPEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM___C_CTOR_OFFSET))(this);
		}

		::FHNLBDMKPEM* __cctor_b__23_0()
		{
			return ((::FHNLBDMKPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
