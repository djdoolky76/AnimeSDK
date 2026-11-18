#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define FAMLNPCANNH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11CCDCE0)
#define FAMLNPCANNH_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x11CCDD20)
#define FAMLNPCANNH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11CCDA80)
#define FAMLNPCANNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11CCD980)
#define FAMLNPCANNH__CTOR_OFFSET UNITYSDK_OFFSET(0x11CCD940)

inline static constexpr unsigned int FAMLNPCANNH_TypeDefinitionIndex = 62358;

class FAMLNPCANNH : public ::System::Object
{
public:
	::UnityEngine::Vector3 GGOPFLNDJGB; // 0x10
	::UnityEngine::Vector3 NPKBJNHGJFC; // 0x1C
	::System::UInt32 FCMPFOAJJIB; // 0x28
	::System::UInt32 MNAIIBHLHMA; // 0x2C
	::System::UInt32 INMHMLGFIIK; // 0x30
	::System::Int32 ENNMFJAABJP; // 0x34

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 FMJGOHNLJNA, ::System::UInt32 CIIPCCLOHLH, ::System::UInt32 EODDDEDPMHA, ::System::Int32 APNFJMEDBFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FAMLNPCANNH__CTOR_OFFSET))(this, BKLGNCBNEGM, GIAEPMKCBIB, FMJGOHNLJNA, CIIPCCLOHLH, EODDDEDPMHA, APNFJMEDBFA);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLNPCANNH_TOSTRING_OFFSET))(this);
	}

	::System::Boolean OKJCHFGIKBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLNPCANNH_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLNPCANNH_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLNPCANNH_LJMIPGJJELP_OFFSET))(this);
	}
};
