#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFKMNLDNIAA;
namespace System { class Object; }

#define FFKMNLDNIAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B8D80)
#define FFKMNLDNIAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B8DC0)
#define FFKMNLDNIAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8B8DD0)

inline static constexpr unsigned int FFKMNLDNIAA___c_TypeDefinitionIndex = 35018;

	class FFKMNLDNIAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFKMNLDNIAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA___C_CTOR_OFFSET))(this);
		}

		::FFKMNLDNIAA* __cctor_b__28_0()
		{
			return ((::FFKMNLDNIAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
