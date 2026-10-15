#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLMLPKBGGE;
namespace System { class Object; }

#define GPLMLPKBGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5105A0)
#define GPLMLPKBGGE_DCMGFIBGMLG_OFFSET UNITYSDK_OFFSET(0x1C529470)
#define GPLMLPKBGGE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C529710)
#define GPLMLPKBGGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5295C0)
#define GPLMLPKBGGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C529550)
#define GPLMLPKBGGE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C510640)
#define GPLMLPKBGGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C529680)
#define GPLMLPKBGGE_GET_EFFECTCOLORID_OFFSET UNITYSDK_OFFSET(0x1C5293F0)
#define GPLMLPKBGGE_GET_MECHATRONID_OFFSET UNITYSDK_OFFSET(0x1C5293C0)
#define GPLMLPKBGGE_GET_PAINTCOLORID_OFFSET UNITYSDK_OFFSET(0x1C5293E0)
#define GPLMLPKBGGE_GET_POSEID_OFFSET UNITYSDK_OFFSET(0x1C5293D0)
#define GPLMLPKBGGE_IJLGPAFEBPH_OFFSET UNITYSDK_OFFSET(0x1C529400)
#define GPLMLPKBGGE_JCMNLDPKAEK_OFFSET UNITYSDK_OFFSET(0x1C5294E0)

inline static constexpr unsigned int GPLMLPKBGGE_TypeDefinitionIndex = 41862;

	class GPLMLPKBGGE : public ::System::Object
	{
	public:
		::System::UInt32 _PoseID_k__BackingField; // 0x10
		::System::UInt32 _PaintColorID_k__BackingField; // 0x14
		::System::UInt32 _EffectColorID_k__BackingField; // 0x18
		::System::UInt32 _MechatronID_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_MechatronID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_GET_MECHATRONID_OFFSET))(this);
		}

		::System::UInt32 get_PoseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_GET_POSEID_OFFSET))(this);
		}

		::System::UInt32 get_PaintColorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_GET_PAINTCOLORID_OFFSET))(this);
		}

		::System::UInt32 get_EffectColorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_GET_EFFECTCOLORID_OFFSET))(this);
		}

		::GPLMLPKBGGE* IJLGPAFEBPH(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_IJLGPAFEBPH_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* DCMGFIBGMLG(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_DCMGFIBGMLG_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* JCMNLDPKAEK(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_JCMNLDPKAEK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::GPLMLPKBGGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::GPLMLPKBGGE* a1, ::GPLMLPKBGGE* a2)
		{
			return ((::System::Boolean(*)(::GPLMLPKBGGE*, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::GPLMLPKBGGE* a1, ::GPLMLPKBGGE* a2)
		{
			return ((::System::Boolean(*)(::GPLMLPKBGGE*, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + GPLMLPKBGGE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
