#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNLBDMKPEM;
namespace System { class Object; }

#define FHNLBDMKPEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20697DF0)
#define FHNLBDMKPEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20697E30)
#define FHNLBDMKPEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20697E40)

inline static constexpr unsigned int FHNLBDMKPEM___c_TypeDefinitionIndex = 30157;

	class FHNLBDMKPEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42910);
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
