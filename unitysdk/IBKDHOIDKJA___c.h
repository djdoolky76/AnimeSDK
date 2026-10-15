#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBKDHOIDKJA;
namespace System { class Object; }

#define IBKDHOIDKJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E619F00)
#define IBKDHOIDKJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E619F30)
#define IBKDHOIDKJA___C___CCTOR_B__123_0_OFFSET UNITYSDK_OFFSET(0x1E619F40)

inline static constexpr unsigned int IBKDHOIDKJA___c_TypeDefinitionIndex = 32232;

	class IBKDHOIDKJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKDHOIDKJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDHOIDKJA___C_CTOR_OFFSET))(this);
		}

		::IBKDHOIDKJA* __cctor_b__123_0()
		{
			return ((::IBKDHOIDKJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDHOIDKJA___C___CCTOR_B__123_0_OFFSET))(this);
		}

	};
