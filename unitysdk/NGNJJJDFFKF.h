#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNFIJNAMOHD.h"
class NLBIEMILEDE;
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define NGNJJJDFFKF_CEBLFCPPEEB_OFFSET UNITYSDK_OFFSET(0xBBB1670)
#define NGNJJJDFFKF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB1240)
#define NGNJJJDFFKF_EJDGNDMMCBH_OFFSET UNITYSDK_OFFSET(0xBBB1280)
#define NGNJJJDFFKF_EJEDDIPFCGL_OFFSET UNITYSDK_OFFSET(0xBBB1560)
#define NGNJJJDFFKF_ENNNFBDFAAJ_OFFSET UNITYSDK_OFFSET(0xBBB1770)
#define NGNJJJDFFKF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBBB1710)
#define NGNJJJDFFKF_LEHHMJJLLEP_OFFSET UNITYSDK_OFFSET(0xBBB1FE0)

	class NGNJJJDFFKF : public ::GNFIJNAMOHD
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EJDGNDMMCBH(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Single a3, ::UnityEngine::Gradient* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Single, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_EJDGNDMMCBH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EJEDDIPFCGL(::NLBIEMILEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_EJEDDIPFCGL_OFFSET))(this, a1);
		}

		::System::Void CEBLFCPPEEB(::NLBIEMILEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_CEBLFCPPEEB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ENNNFBDFAAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_ENNNFBDFAAJ_OFFSET))(this);
		}

		::UnityEngine::Texture* LEHHMJJLLEP()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNJJJDFFKF_LEHHMJJLLEP_OFFSET))(this);
		}

	};
