#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/KIOIAECAMPN.h"
#include "unitysdk/System/Object.h"

class BKPBGNFMNBO;
class JNNGKJFNLOM;
class MFBKLAENAEC;
namespace MoleMole { class ConfigUICameraTimelineData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ANAJKENMCCA_CNBJBPKPHDF_OFFSET UNITYSDK_OFFSET(0x1266C9F0)
#define ANAJKENMCCA_EDKPCFIDCAN_OFFSET UNITYSDK_OFFSET(0x1266C8F0)
#define ANAJKENMCCA_FNDNEHKHCGC_OFFSET UNITYSDK_OFFSET(0x1266CCB0)
#define ANAJKENMCCA_FPLGNHBPPMF_OFFSET UNITYSDK_OFFSET(0x1266CE20)
#define ANAJKENMCCA_HEOCNPIFPBM_OFFSET UNITYSDK_OFFSET(0x1266CEC0)
#define ANAJKENMCCA_HHIBMJJIHHN_OFFSET UNITYSDK_OFFSET(0x1266CC40)
#define ANAJKENMCCA_HMBAJLAAHPF_OFFSET UNITYSDK_OFFSET(0x1266CBE0)
#define ANAJKENMCCA_IOBCMECPAPA_OFFSET UNITYSDK_OFFSET(0x1266CA40)
#define ANAJKENMCCA_KJHJCODKFBF_OFFSET UNITYSDK_OFFSET(0x1266C950)
#define ANAJKENMCCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1266C880)

inline static constexpr unsigned int ANAJKENMCCA_TypeDefinitionIndex = 48911;

class ANAJKENMCCA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NFFCOMENANP; // 0x10
	::MoleMole::ConfigUICameraTimelineData* KHLKJIAOLFK; // 0x18
	::MFBKLAENAEC* KAJMLHHCCEO; // 0x20
	::JNNGKJFNLOM* PAHKDMGHHBA; // 0x28
	::Foundation::AssetRequestHandle OFHPHIBOPKE; // 0x30
	::JNNGKJFNLOM* BLCLOFHIKKK; // 0x50
	::System::Int32 ABHBKFJKINO; // 0x58
	::KIOIAECAMPN GBONHMBMPFC; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJKENMCCA__CTOR_OFFSET))(this);
	}

	::System::Void EDKPCFIDCAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJKENMCCA_EDKPCFIDCAN_OFFSET))(this);
	}

	::System::Void CNBJBPKPHDF(::UnityEngine::Transform* AGPLCNEHALO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANAJKENMCCA_CNBJBPKPHDF_OFFSET))(this, AGPLCNEHALO);
	}

	::System::Void IOBCMECPAPA(::System::String* JPEHOCBIHBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANAJKENMCCA_IOBCMECPAPA_OFFSET))(this, JPEHOCBIHBC);
	}

	::System::Void HMBAJLAAHPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJKENMCCA_HMBAJLAAHPF_OFFSET))(this);
	}

	::System::Void KJHJCODKFBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJKENMCCA_KJHJCODKFBF_OFFSET))(this);
	}

	::System::Void HHIBMJJIHHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJKENMCCA_HHIBMJJIHHN_OFFSET))(this);
	}

	::System::Void FNDNEHKHCGC(::BKPBGNFMNBO* EPFFGFAEACO)
	{
		return ((::System::Void(*)(::PVOID, ::BKPBGNFMNBO*))((::PBYTE)hIl2Cpp + ANAJKENMCCA_FNDNEHKHCGC_OFFSET))(this, EPFFGFAEACO);
	}

	::System::Void FPLGNHBPPMF(::System::Collections::Generic::List_1<::System::String*>* NFFCOMENANP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + ANAJKENMCCA_FPLGNHBPPMF_OFFSET))(this, NFFCOMENANP);
	}

	::System::Void HEOCNPIFPBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJKENMCCA_HEOCNPIFPBM_OFFSET))(this);
	}
};
