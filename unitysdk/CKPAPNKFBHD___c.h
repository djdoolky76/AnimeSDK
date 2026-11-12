#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPAPNKFBHD;
namespace System { class Object; }

#define CKPAPNKFBHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C28B0)
#define CKPAPNKFBHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C28E0)
#define CKPAPNKFBHD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F3C28F0)

inline static constexpr unsigned int CKPAPNKFBHD___c_TypeDefinitionIndex = 29241;

	class CKPAPNKFBHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPAPNKFBHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD___C_CTOR_OFFSET))(this);
		}

		::CKPAPNKFBHD* __cctor_b__18_0()
		{
			return ((::CKPAPNKFBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
