#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FOMHMBKPEDB_EAODHPPGPNO.h"
#include "unitysdk/FOMHMBKPEDB_LMHFPDFCMJA.h"
#include "unitysdk/FOMHMBKPEDB_OJLHLMEDJLN.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOMHMBKPEDB_ALCBLHANJHC_OFFSET UNITYSDK_OFFSET(0x158FB700)
#define FOMHMBKPEDB_ALJBJKGDICO_OFFSET UNITYSDK_OFFSET(0x158FC590)
#define FOMHMBKPEDB_COANAIKCJND_OFFSET UNITYSDK_OFFSET(0x158FB470)
#define FOMHMBKPEDB_CTOR_OFFSET UNITYSDK_OFFSET(0x158FCA40)
#define FOMHMBKPEDB_EFLFHDLNIPJ_OFFSET UNITYSDK_OFFSET(0x158FC0D0)
#define FOMHMBKPEDB_EJEMAPAIDKB_OFFSET UNITYSDK_OFFSET(0x158FB320)
#define FOMHMBKPEDB_JODAMNNDDJK_OFFSET UNITYSDK_OFFSET(0x158FB570)
#define FOMHMBKPEDB_KKLLJAPDKBB_OFFSET UNITYSDK_OFFSET(0x158FB8A0)
#define FOMHMBKPEDB_LEDBDGOAMMN_OFFSET UNITYSDK_OFFSET(0x158FBCB0)
#define FOMHMBKPEDB_NNDEDMOIBBH_OFFSET UNITYSDK_OFFSET(0x158FBED0)

inline static constexpr unsigned int FOMHMBKPEDB_TypeDefinitionIndex = 59041;

	class FOMHMBKPEDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_CTOR_OFFSET))(this);
		}

		static ::System::Single EJEMAPAIDKB(::FOMHMBKPEDB_OJLHLMEDJLN a1)
		{
			return ((::System::Single(*)(::FOMHMBKPEDB_OJLHLMEDJLN))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_EJEMAPAIDKB_OFFSET))(a1);
		}

		static ::System::Single JODAMNNDDJK(::FOMHMBKPEDB_LMHFPDFCMJA a1)
		{
			return ((::System::Single(*)(::FOMHMBKPEDB_LMHFPDFCMJA))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_JODAMNNDDJK_OFFSET))(a1);
		}

		static ::System::Single KKLLJAPDKBB(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_KKLLJAPDKBB_OFFSET))(a1);
		}

		static ::System::Single NNDEDMOIBBH(::FOMHMBKPEDB_EAODHPPGPNO a1)
		{
			return ((::System::Single(*)(::FOMHMBKPEDB_EAODHPPGPNO))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_NNDEDMOIBBH_OFFSET))(a1);
		}

		static ::System::Single COANAIKCJND(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_COANAIKCJND_OFFSET))(a1);
		}

		static ::System::Single EFLFHDLNIPJ(::System::Collections::Generic::IDictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IDictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>*))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_EFLFHDLNIPJ_OFFSET))(a1);
		}

		static ::System::UInt32 ALJBJKGDICO(::System::Collections::Generic::IDictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::IDictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>*))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_ALJBJKGDICO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LEDBDGOAMMN(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_LEDBDGOAMMN_OFFSET))(a1);
		}

		static ::System::Boolean ALCBLHANJHC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOMHMBKPEDB_ALCBLHANJHC_OFFSET))(a1, a2);
		}

	};
