#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCHPIFLNKJO.h"
class FIFPADNLPLB;
class HONOFODMNPO;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CECAMMLOAPB_AHMANEHOKMO_OFFSET UNITYSDK_OFFSET(0xC77CC00)
#define CECAMMLOAPB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC77CCF0)
#define CECAMMLOAPB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC77CDC0)
#define CECAMMLOAPB_CTOR_OFFSET UNITYSDK_OFFSET(0xC77CE60)
#define CECAMMLOAPB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC77CA60)
#define CECAMMLOAPB_HIHMIIHFBLM_OFFSET UNITYSDK_OFFSET(0xC77C900)
#define CECAMMLOAPB_JPPFCPGPOFG_OFFSET UNITYSDK_OFFSET(0xC77CAF0)
#define CECAMMLOAPB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC77C800)

inline static constexpr unsigned int CECAMMLOAPB_TypeDefinitionIndex = 71256;

	class CECAMMLOAPB : public ::FCHPIFLNKJO
	{
	public:
		::HONOFODMNPO* EKDLLLIPKEE; // 0x138
		::System::String* CHAMNLJOFII; // 0x140
		::UnityEngine::UI::Image* IGPGEAPACDK; // 0x148
		::UnityEngine::UI::Image* KEFCOKPMPDO; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECAMMLOAPB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECAMMLOAPB__ONBIND_OFFSET))(this);
		}

		::System::Void HIHMIIHFBLM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CECAMMLOAPB_HIHMIIHFBLM_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECAMMLOAPB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JPPFCPGPOFG(::FIFPADNLPLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFPADNLPLB*))((::PBYTE)hIl2Cpp + CECAMMLOAPB_JPPFCPGPOFG_OFFSET))(this, a1);
		}

		::System::Void AHMANEHOKMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CECAMMLOAPB_AHMANEHOKMO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECAMMLOAPB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECAMMLOAPB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
