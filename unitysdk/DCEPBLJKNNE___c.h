#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCEPBLJKNNE;
namespace System { class Object; }

#define DCEPBLJKNNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4435B0)
#define DCEPBLJKNNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4435F0)
#define DCEPBLJKNNE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F443600)

inline static constexpr unsigned int DCEPBLJKNNE___c_TypeDefinitionIndex = 34229;

	class DCEPBLJKNNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCEPBLJKNNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE___C_CTOR_OFFSET))(this);
		}

		::DCEPBLJKNNE* __cctor_b__33_0()
		{
			return ((::DCEPBLJKNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
