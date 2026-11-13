#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BBDFGMBNDGD;
class FKIGCDJOIKF;
class KNKPLOGICFO;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define FKIGCDJOIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA8BA0)
#define FKIGCDJOIKF_DMMBNNBKCNH_OFFSET UNITYSDK_OFFSET(0x1AAA82F0)
#define FKIGCDJOIKF_DPPFNCEHBML_OFFSET UNITYSDK_OFFSET(0x1AAA8130)
#define FKIGCDJOIKF_EFNJGPKNBGJ_OFFSET UNITYSDK_OFFSET(0x1AAA7B90)
#define FKIGCDJOIKF_FLAGCHKAFGF_OFFSET UNITYSDK_OFFSET(0x1AAA7D00)
#define FKIGCDJOIKF_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AAA7C90)
#define FKIGCDJOIKF_HGIOPHMEDBK_OFFSET UNITYSDK_OFFSET(0x1AAA85F0)
#define FKIGCDJOIKF_IKCBBELNINK_OFFSET UNITYSDK_OFFSET(0x1AAA8860)
#define FKIGCDJOIKF_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x1AAA7CB0)
#define FKIGCDJOIKF_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AAA7CA0)
#define FKIGCDJOIKF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AAA7620)
#define FKIGCDJOIKF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAA7C40)

inline static constexpr unsigned int FKIGCDJOIKF_TypeDefinitionIndex = 74287;

	class FKIGCDJOIKF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Slider* KINFJKKKIHH; // 0x60
		::UnityEngine::Animation* OFDFAIMLJKB; // 0x68
		::UnityEngine::UI::Slider* KODEHPGLFJD; // 0x70
		::UnityEngine::UI::Slider* GDPAHPLCMLO; // 0x78
		::KNKPLOGICFO* GIKJFPPGCHA; // 0x80
		::UnityEngine::RectTransform* FPCDGPHNCJE; // 0x88
		::UnityEngine::RectTransform* MDAALDPJNAL; // 0x90
		::UnityEngine::RectTransform* NPFLAHJMJGC; // 0x98
		::UnityEngine::RectTransform* DCNCKFCJJKL; // 0xA0
		::UnityEngine::UI::Slider* LMBCAPKPNMH; // 0xA8
		::System::Boolean JLFOHMHDMHM; // 0xB0
		::System::Boolean FNECNBDADDJ; // 0xB1
		static ::FKIGCDJOIKF** StaticGet__Instance_k__BackingField()
		{
			return (::FKIGCDJOIKF**)UnitySDK::FromName("", "FKIGCDJOIKF")->GetStaticField(0x43F90);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object HOFFFIJICIP; // 0x0
		// static const ::System::String* JOCPEBMGLFD; // 0x0
		// static const ::System::String* HAGMAFFJDHN; // 0x0
		// static const ::System::String* CLIEMCDHMGO; // 0x0
		// static const ::System::String* JDCOKINJPMB; // 0x0
		// static const ::System::String* JANFOLJAGKJ; // 0x0
		// static const ::System::String* JOKBFODLBFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGCDJOIKF__ONBIND_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGCDJOIKF__ONDISPOSE_OFFSET))(this);
		}

		static ::FKIGCDJOIKF* get_Instance()
		{
			return ((::FKIGCDJOIKF*(*)())((::PBYTE)hIl2Cpp + FKIGCDJOIKF_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::FKIGCDJOIKF* a1)
		{
			return ((::System::Void(*)(::FKIGCDJOIKF*))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void FLAGCHKAFGF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_FLAGCHKAFGF_OFFSET))(this, a1, a2);
		}

		::System::Void DMMBNNBKCNH(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_DMMBNNBKCNH_OFFSET))(this, a1);
		}

		::System::Void HGIOPHMEDBK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_HGIOPHMEDBK_OFFSET))(this, a1, a2);
		}

		::System::Void IKCBBELNINK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_IKCBBELNINK_OFFSET))(this);
		}

		::System::Void EFNJGPKNBGJ(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_EFNJGPKNBGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Single DPPFNCEHBML(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKIGCDJOIKF_DPPFNCEHBML_OFFSET))(this, a1);
		}

	};
