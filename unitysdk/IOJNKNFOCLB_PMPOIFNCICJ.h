#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_1_OFFSET UNITYSDK_OFFSET(0x1CC8D660)
#define IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_2_OFFSET UNITYSDK_OFFSET(0x1CC8D900)
#define IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_3_OFFSET UNITYSDK_OFFSET(0x1CC8DBB0)
#define IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0x1CC858A0)
#define IOJNKNFOCLB_PMPOIFNCICJ_KOFEIMGPOKF_OFFSET UNITYSDK_OFFSET(0x1CC8D540)

	class IOJNKNFOCLB_PMPOIFNCICJ : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_IDDGLAKAKDI()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "PMPOIFNCICJ")->GetStaticField(0x0);
		}

		// static const ::System::Object KCCBMAAKNBH; // 0x0
		static ::System::String* DDCENCNBHDN(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_OFFSET))(a1, a2);
		}

		static ::System::String* DDCENCNBHDN_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* DDCENCNBHDN_2(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* DDCENCNBHDN_3(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IOJNKNFOCLB_PMPOIFNCICJ_DDCENCNBHDN_3_OFFSET))(a1, a2);
		}

		static ::System::Void KOFEIMGPOKF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJNKNFOCLB_PMPOIFNCICJ_KOFEIMGPOKF_OFFSET))();
		}

	};
