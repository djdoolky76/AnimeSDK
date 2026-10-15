#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define FKHJLDPKMPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x157FAAA0)
#define FKHJLDPKMPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x157FAAD0)
#define FKHJLDPKMPG___C___CLOSESCREENTRANSFER_B__24_0_OFFSET UNITYSDK_OFFSET(0x157FAAE0)

inline static constexpr unsigned int FKHJLDPKMPG___c_TypeDefinitionIndex = 66134;

	class FKHJLDPKMPG___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DFA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKHJLDPKMPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHJLDPKMPG___C_CTOR_OFFSET))(this);
		}

		::System::Void __CloseScreenTransfer_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHJLDPKMPG___C___CLOSESCREENTRANSFER_B__24_0_OFFSET))(this);
		}

	};
