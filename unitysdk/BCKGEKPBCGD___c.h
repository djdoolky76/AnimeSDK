#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCKGEKPBCGD;
namespace System { class Object; }

#define BCKGEKPBCGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DCEA0)
#define BCKGEKPBCGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DCED0)
#define BCKGEKPBCGD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8DCEE0)

inline static constexpr unsigned int BCKGEKPBCGD___c_TypeDefinitionIndex = 29743;

	class BCKGEKPBCGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x508F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKGEKPBCGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD___C_CTOR_OFFSET))(this);
		}

		::BCKGEKPBCGD* __cctor_b__18_0()
		{
			return ((::BCKGEKPBCGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGEKPBCGD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
