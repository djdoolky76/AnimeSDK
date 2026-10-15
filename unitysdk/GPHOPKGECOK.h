#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPHOPKGECOK;
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define GPHOPKGECOK_BMCGPGOBDEE_OFFSET UNITYSDK_OFFSET(0x15B59ED0)
#define GPHOPKGECOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B5A300)
#define GPHOPKGECOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5A280)
#define GPHOPKGECOK_HEOPINBIONN_OFFSET UNITYSDK_OFFSET(0x15B5A030)
#define GPHOPKGECOK_ICJGMELMLGO_1_OFFSET UNITYSDK_OFFSET(0x15B59C60)
#define GPHOPKGECOK_ICJGMELMLGO_2_OFFSET UNITYSDK_OFFSET(0x15B59D60)
#define GPHOPKGECOK_IOJKCPHGDCB_OFFSET UNITYSDK_OFFSET(0x15B5A170)
#define GPHOPKGECOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B5A120)

inline static constexpr unsigned int GPHOPKGECOK_TypeDefinitionIndex = 49152;

	class GPHOPKGECOK : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* ONGBGJGKNLD; // 0x10
		static ::System::String** StaticGet_FFOHHGFDMAO()
		{
			return (::System::String**)UnitySDK::FromName("", "GPHOPKGECOK")->GetStaticField(0x6D680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHOPKGECOK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPHOPKGECOK_CCTOR_OFFSET))();
		}

		::System::Void ICJGMELMLGO_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + GPHOPKGECOK_ICJGMELMLGO_1_OFFSET))(this, a1, a2);
		}

		::System::Void ICJGMELMLGO_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GPHOPKGECOK_ICJGMELMLGO_2_OFFSET))(this, a1, a2);
		}

		::System::Void BMCGPGOBDEE(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GPHOPKGECOK_BMCGPGOBDEE_OFFSET))(this, a1, a2);
		}

		::System::Void HEOPINBIONN(::GPHOPKGECOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPHOPKGECOK*))((::PBYTE)hIl2Cpp + GPHOPKGECOK_HEOPINBIONN_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHOPKGECOK_TOSTRING_OFFSET))(this);
		}

		::System::Void IOJKCPHGDCB(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GPHOPKGECOK_IOJKCPHGDCB_OFFSET))(this, a1, a2);
		}

	};
