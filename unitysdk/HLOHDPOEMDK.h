#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HLOHDPOEMDK_APFBEFJEGOK.h"
class COOONBGCCCM;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLOHDPOEMDK_APCKKONPHNE_OFFSET UNITYSDK_OFFSET(0x15D73AA0)
#define HLOHDPOEMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D74790)
#define HLOHDPOEMDK_FKAHCKHNNKK_OFFSET UNITYSDK_OFFSET(0x15D73FC0)
#define HLOHDPOEMDK_GCKHINNOEEA_OFFSET UNITYSDK_OFFSET(0x15D73C60)
#define HLOHDPOEMDK_GET_DISCARDPILE_OFFSET UNITYSDK_OFFSET(0x15D73990)
#define HLOHDPOEMDK_GET_DRAWPILE_OFFSET UNITYSDK_OFFSET(0x15D73980)
#define HLOHDPOEMDK_GET_EXILEPILE_OFFSET UNITYSDK_OFFSET(0x15D739A0)
#define HLOHDPOEMDK_GET_HANDSLOTLIMIT_OFFSET UNITYSDK_OFFSET(0x15D739B0)
#define HLOHDPOEMDK_GET_HAND_OFFSET UNITYSDK_OFFSET(0x15D73970)
#define HLOHDPOEMDK_GET_MANA_OFFSET UNITYSDK_OFFSET(0x15D739D0)
#define HLOHDPOEMDK_GMBEBACKKDG_OFFSET UNITYSDK_OFFSET(0x15D73F40)
#define HLOHDPOEMDK_HDIBINEKDDF_OFFSET UNITYSDK_OFFSET(0x15D74550)
#define HLOHDPOEMDK_JMDAMOJPABH_OFFSET UNITYSDK_OFFSET(0x15D745C0)
#define HLOHDPOEMDK_KFCPNFHNGBO_OFFSET UNITYSDK_OFFSET(0x15D73D20)
#define HLOHDPOEMDK_OGHELGNJKJJ_OFFSET UNITYSDK_OFFSET(0x15D739F0)
#define HLOHDPOEMDK_SET_HANDSLOTLIMIT_OFFSET UNITYSDK_OFFSET(0x15D739C0)
#define HLOHDPOEMDK_SET_MANA_OFFSET UNITYSDK_OFFSET(0x15D739E0)

inline static constexpr unsigned int HLOHDPOEMDK_TypeDefinitionIndex = 81100;

	class HLOHDPOEMDK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _DrawPile_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _DiscardPile_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _Hand_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _ExilePile_k__BackingField; // 0x28
		::System::Int32 _Mana_k__BackingField; // 0x30
		::System::UInt32 _HandSlotLimit_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* get_Hand()
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GET_HAND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* get_DrawPile()
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GET_DRAWPILE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* get_DiscardPile()
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GET_DISCARDPILE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* get_ExilePile()
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GET_EXILEPILE_OFFSET))(this);
		}

		::System::UInt32 get_HandSlotLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GET_HANDSLOTLIMIT_OFFSET))(this);
		}

		::System::Void set_HandSlotLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_SET_HANDSLOTLIMIT_OFFSET))(this, a1);
		}

		::System::Int32 get_Mana()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GET_MANA_OFFSET))(this);
		}

		::System::Void set_Mana(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_SET_MANA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::COOONBGCCCM*>* OGHELGNJKJJ()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_OGHELGNJKJJ_OFFSET))(this);
		}

		::COOONBGCCCM* APCKKONPHNE(::System::UInt32 a1)
		{
			return ((::COOONBGCCCM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APCKKONPHNE_OFFSET))(this, a1);
		}

		::System::Int32 GCKHINNOEEA(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GCKHINNOEEA_OFFSET))(this, a1);
		}

		::System::UInt32 KFCPNFHNGBO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_KFCPNFHNGBO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* FKAHCKHNNKK()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_FKAHCKHNNKK_OFFSET))(this);
		}

		::System::Boolean HDIBINEKDDF(::COOONBGCCCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_HDIBINEKDDF_OFFSET))(this, a1);
		}

		::System::Boolean JMDAMOJPABH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_JMDAMOJPABH_OFFSET))(this);
		}

		::HLOHDPOEMDK_APFBEFJEGOK GMBEBACKKDG(::COOONBGCCCM* a1)
		{
			return ((::HLOHDPOEMDK_APFBEFJEGOK(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_GMBEBACKKDG_OFFSET))(this, a1);
		}

	};
