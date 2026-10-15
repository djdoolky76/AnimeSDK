#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MPJFIPNGENE_LPDMNOBJLJP.h"
class FGCKOPDAIIN;
class OIJOKMHJKLJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPJFIPNGENE_EMMJOPKIKOL_AONEONHEHNA_OFFSET UNITYSDK_OFFSET(0x1EC22900)
#define MPJFIPNGENE_EMMJOPKIKOL_CPJEFLHGMPB_OFFSET UNITYSDK_OFFSET(0x1EC22FE0)
#define MPJFIPNGENE_EMMJOPKIKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC21B50)
#define MPJFIPNGENE_EMMJOPKIKOL_EFHEOAAFFML_OFFSET UNITYSDK_OFFSET(0x1EC228F0)
#define MPJFIPNGENE_EMMJOPKIKOL_ELPLIEIMKLP_OFFSET UNITYSDK_OFFSET(0x1EC21EA0)
#define MPJFIPNGENE_EMMJOPKIKOL_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x1EC22FF0)
#define MPJFIPNGENE_EMMJOPKIKOL_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EC23010)
#define MPJFIPNGENE_EMMJOPKIKOL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1EC23050)
#define MPJFIPNGENE_EMMJOPKIKOL_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1EC23030)
#define MPJFIPNGENE_EMMJOPKIKOL_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1EC21AA0)
#define MPJFIPNGENE_EMMJOPKIKOL_SET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x1EC23000)
#define MPJFIPNGENE_EMMJOPKIKOL_SET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EC23020)
#define MPJFIPNGENE_EMMJOPKIKOL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1EC23060)
#define MPJFIPNGENE_EMMJOPKIKOL_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1EC23040)

inline static constexpr unsigned int MPJFIPNGENE_EMMJOPKIKOL_TypeDefinitionIndex = 44029;

	class MPJFIPNGENE_EMMJOPKIKOL : public ::System::Object
	{
	public:
		::OIJOKMHJKLJ* _Definition_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::FGCKOPDAIIN*>* _Dependencies_k__BackingField; // 0x18
		::System::Boolean _IsFinished_k__BackingField; // 0x20
		::System::Boolean _IsStarted_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single NNGGLKNJNHJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::MPJFIPNGENE_LPDMNOBJLJP ELPLIEIMKLP()
		{
			return ((::MPJFIPNGENE_LPDMNOBJLJP(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_ELPLIEIMKLP_OFFSET))(this);
		}

		::System::Void AONEONHEHNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_AONEONHEHNA_OFFSET))(this);
		}

		::System::Void EFHEOAAFFML(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_EFHEOAAFFML_OFFSET))(this, a1);
		}

		::OIJOKMHJKLJ* get_Definition()
		{
			return ((::OIJOKMHJKLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_GET_DEFINITION_OFFSET))(this);
		}

		::System::Void set_Definition(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_SET_DEFINITION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FGCKOPDAIIN*>* get_Dependencies()
		{
			return ((::System::Collections::Generic::List_1<::FGCKOPDAIIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_GET_DEPENDENCIES_OFFSET))(this);
		}

		::System::Void set_Dependencies(::System::Collections::Generic::List_1<::FGCKOPDAIIN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_SET_DEPENDENCIES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_GET_ISSTARTED_OFFSET))(this);
		}

		::System::Void set_IsStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_SET_ISSTARTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean CPJEFLHGMPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EMMJOPKIKOL_CPJEFLHGMPB_OFFSET))(this);
		}

	};
