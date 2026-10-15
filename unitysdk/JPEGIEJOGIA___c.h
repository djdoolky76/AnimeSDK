#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JPEGIEJOGIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2BB9F0)
#define JPEGIEJOGIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BBA30)
#define JPEGIEJOGIA___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0xB2BBA40)

inline static constexpr unsigned int JPEGIEJOGIA___c_TypeDefinitionIndex = 65577;

	class JPEGIEJOGIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CD80);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CD88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEGIEJOGIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGIEJOGIA___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGIEJOGIA___C__CREATEITEM_B__1_0_OFFSET))(this);
		}

	};
