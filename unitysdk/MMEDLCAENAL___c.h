#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMEDLCAENAL;
namespace System { class Object; }

#define MMEDLCAENAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5ED40)
#define MMEDLCAENAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5ED80)
#define MMEDLCAENAL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA5ED90)

inline static constexpr unsigned int MMEDLCAENAL___c_TypeDefinitionIndex = 29375;

	class MMEDLCAENAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMEDLCAENAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL___C_CTOR_OFFSET))(this);
		}

		::MMEDLCAENAL* __cctor_b__28_0()
		{
			return ((::MMEDLCAENAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
