#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLMLPKBGGE;
namespace System { class Object; }

#define GPLMLPKBGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53EA60)
#define GPLMLPKBGGE_DCMGFIBGMLG_OFFSET UNITYSDK_OFFSET(0x1C557930)
#define GPLMLPKBGGE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C557BD0)
#define GPLMLPKBGGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C557A80)
#define GPLMLPKBGGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C557A10)
#define GPLMLPKBGGE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C53EB00)
#define GPLMLPKBGGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C557B40)
#define GPLMLPKBGGE_GET_EFFECTCOLORID_OFFSET UNITYSDK_OFFSET(0x1C5578B0)
#define GPLMLPKBGGE_GET_MECHATRONID_OFFSET UNITYSDK_OFFSET(0x1C557880)
#define GPLMLPKBGGE_GET_PAINTCOLORID_OFFSET UNITYSDK_OFFSET(0x1C5578A0)
#define GPLMLPKBGGE_GET_POSEID_OFFSET UNITYSDK_OFFSET(0x1C557890)
#define GPLMLPKBGGE_IJLGPAFEBPH_OFFSET UNITYSDK_OFFSET(0x1C5578C0)
#define GPLMLPKBGGE_JCMNLDPKAEK_OFFSET UNITYSDK_OFFSET(0x1C5579A0)

inline static constexpr unsigned int GPLMLPKBGGE_TypeDefinitionIndex = 41862;

	class GPLMLPKBGGE : public ::System::Object
	{
	public:
		::System::UInt32 _MechatronID_k__BackingField; // 0x10
		::System::UInt32 _PoseID_k__BackingField; // 0x14
		::System::UInt32 _PaintColorID_k__BackingField; // 0x18
		::System::UInt32 _EffectColorID_k__BackingField; // 0x1C
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
