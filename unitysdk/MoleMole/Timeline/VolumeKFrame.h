#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Timeline/TimelineFrame.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine::Playables { class PlayableBehaviour; }

#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_BALHDAMENGL_OFFSET UNITYSDK_OFFSET(0x14BDC490)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_FEFBINGMDJO_OFFSET UNITYSDK_OFFSET(0x14BDC460)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_FFLMNPDOIOI_OFFSET UNITYSDK_OFFSET(0x14BDC480)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_GET_FRAMETYPES_OFFSET UNITYSDK_OFFSET(0x14BDAF60)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_GET_TRACKNAME_OFFSET UNITYSDK_OFFSET(0x14BDB270)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_INITPROPERTIES_OFFSET UNITYSDK_OFFSET(0x14BDB6A0)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_JJBCCKNJBCK_OFFSET UNITYSDK_OFFSET(0x14BDC290)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_MBGFILGDEKE_OFFSET UNITYSDK_OFFSET(0x14BDC280)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_OFHEMMKIKHM_OFFSET UNITYSDK_OFFSET(0x14BDC470)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_RECORDERUNKFRAMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14BDBE60)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME_UNKFRAMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14BDBDB0)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BDC1E0)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x14BDC180)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VolumeKFrame_TypeDefinitionIndex = 59759;

	class VolumeKFrame : public ::UnityEngine::Timeline::TimelineFrame
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>*>** StaticGet_PropertyInfoDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeKFrame_TypeDefinitionIndex)->GetStaticField(0x4E9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::Type*>* get_frameTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_GET_FRAMETYPES_OFFSET))(this);
		}

		::System::String* get_trackName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_GET_TRACKNAME_OFFSET))(this);
		}

		::System::Void InitProperties(::System::Int32 OIKPHDGHNOC, ::UnityEngine::Playables::PlayableBehaviour* NGBJILOKGCG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_INITPROPERTIES_OFFSET))(this, OIKPHDGHNOC, NGBJILOKGCG);
		}

		::System::Boolean UnKFrameProperty(::System::Type* LCBNOCKOKMD, ::System::String* HIAIKHDFCLN, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_UNKFRAMEPROPERTY_OFFSET))(this, LCBNOCKOKMD, HIAIKHDFCLN, EEKENHBPKGO);
		}

		::System::Void RecorderUnKFrameProperty(::System::Type* EEMBGFHMKKK, ::System::String* HIAIKHDFCLN, ::UnityEngine::Timeline::KFrameFieldType PGBEMEPAPLD, ::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_RECORDERUNKFRAMEPROPERTY_OFFSET))(this, EEMBGFHMKKK, HIAIKHDFCLN, PGBEMEPAPLD, EGEGIMGMJHN);
		}

		::System::String* MBGFILGDEKE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_MBGFILGDEKE_OFFSET))(this);
		}

		::System::Collections::IEnumerable* JJBCCKNJBCK()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_JJBCCKNJBCK_OFFSET))(this);
		}

		::System::Void FEFBINGMDJO(::System::Type* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::UnityEngine::Timeline::KFrameFieldType FDHMCIFPNCK, ::System::Single MPBJAGIKPJM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_FEFBINGMDJO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
		}

		::System::Void OFHEMMKIKHM(::System::Int32 MIALFKCCCPI, ::UnityEngine::Playables::PlayableBehaviour* KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_OFHEMMKIKHM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Boolean FFLMNPDOIOI(::System::Type* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_FFLMNPDOIOI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Collections::Generic::List_1<::System::Type*>* BALHDAMENGL()
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME_BALHDAMENGL_OFFSET))(this);
		}
	};
}
