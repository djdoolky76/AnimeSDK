#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
class INBJBBGLCKJ;
class IOEPMPAKMOK;
namespace System { class Exception; }
namespace System { class String; }

#define NNPMENNGJLH_ALODGAGGNEL_OFFSET UNITYSDK_OFFSET(0xBCD8110)
#define NNPMENNGJLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBCD83B0)
#define NNPMENNGJLH_CTOR_2_OFFSET UNITYSDK_OFFSET(0xBCD8420)
#define NNPMENNGJLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD8350)
#define NNPMENNGJLH_GET_ENDNAVAREA_OFFSET UNITYSDK_OFFSET(0xBCD80F0)
#define NNPMENNGJLH_GET_ENDNAVQUERYINFO_OFFSET UNITYSDK_OFFSET(0xBCD80D0)
#define NNPMENNGJLH_GET_STARTNAVAREA_OFFSET UNITYSDK_OFFSET(0xBCD80B0)
#define NNPMENNGJLH_GET_STARTNAVQUERYINFO_OFFSET UNITYSDK_OFFSET(0xBCD8090)
#define NNPMENNGJLH_SET_ENDNAVAREA_OFFSET UNITYSDK_OFFSET(0xBCD8100)
#define NNPMENNGJLH_SET_ENDNAVQUERYINFO_OFFSET UNITYSDK_OFFSET(0xBCD80E0)
#define NNPMENNGJLH_SET_STARTNAVAREA_OFFSET UNITYSDK_OFFSET(0xBCD80C0)
#define NNPMENNGJLH_SET_STARTNAVQUERYINFO_OFFSET UNITYSDK_OFFSET(0xBCD80A0)

inline static constexpr unsigned int NNPMENNGJLH_TypeDefinitionIndex = 74566;

	class NNPMENNGJLH : public ::System::Exception
	{
	public:
		::INBJBBGLCKJ* _StartNavQueryInfo_k__BackingField; // 0x88
		::IOEPMPAKMOK* _EndNavArea_k__BackingField; // 0x90
		::INBJBBGLCKJ* _EndNavQueryInfo_k__BackingField; // 0x98
		::IOEPMPAKMOK* _StartNavArea_k__BackingField; // 0xA0
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::INBJBBGLCKJ* a1, ::IOEPMPAKMOK* a2, ::INBJBBGLCKJ* a3, ::IOEPMPAKMOK* a4)
		{
			return ((::System::Void(*)(::PVOID, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::INBJBBGLCKJ* get_StartNavQueryInfo()
		{
			return ((::INBJBBGLCKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPMENNGJLH_GET_STARTNAVQUERYINFO_OFFSET))(this);
		}

		::System::Void set_StartNavQueryInfo(::INBJBBGLCKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBJBBGLCKJ*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_SET_STARTNAVQUERYINFO_OFFSET))(this, a1);
		}

		::IOEPMPAKMOK* get_StartNavArea()
		{
			return ((::IOEPMPAKMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPMENNGJLH_GET_STARTNAVAREA_OFFSET))(this);
		}

		::System::Void set_StartNavArea(::IOEPMPAKMOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_SET_STARTNAVAREA_OFFSET))(this, a1);
		}

		::INBJBBGLCKJ* get_EndNavQueryInfo()
		{
			return ((::INBJBBGLCKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPMENNGJLH_GET_ENDNAVQUERYINFO_OFFSET))(this);
		}

		::System::Void set_EndNavQueryInfo(::INBJBBGLCKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBJBBGLCKJ*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_SET_ENDNAVQUERYINFO_OFFSET))(this, a1);
		}

		::IOEPMPAKMOK* get_EndNavArea()
		{
			return ((::IOEPMPAKMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPMENNGJLH_GET_ENDNAVAREA_OFFSET))(this);
		}

		::System::Void set_EndNavArea(::IOEPMPAKMOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + NNPMENNGJLH_SET_ENDNAVAREA_OFFSET))(this, a1);
		}

		::System::Boolean ALODGAGGNEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPMENNGJLH_ALODGAGGNEL_OFFSET))(this);
		}

	};
