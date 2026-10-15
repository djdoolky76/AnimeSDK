#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJKGHIFLLAO_BDHGHGHKLBJ_OFFSET UNITYSDK_OFFSET(0x15D29130)
#define HJKGHIFLLAO_BJJKGOPDONF_OFFSET UNITYSDK_OFFSET(0x15D29530)
#define HJKGHIFLLAO_CLFFEDGPAJM_OFFSET UNITYSDK_OFFSET(0x15D29080)
#define HJKGHIFLLAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2B8A0)
#define HJKGHIFLLAO_DANDPNJAPGA_OFFSET UNITYSDK_OFFSET(0x15D28D30)
#define HJKGHIFLLAO_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0x15D2B360)
#define HJKGHIFLLAO_FNPLIANMKHN_OFFSET UNITYSDK_OFFSET(0x15D29450)
#define HJKGHIFLLAO_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x15D2A290)
#define HJKGHIFLLAO_JKKNIIHJOKG_OFFSET UNITYSDK_OFFSET(0x15D29740)
#define HJKGHIFLLAO_KMBEOLNCACF_OFFSET UNITYSDK_OFFSET(0x15D29310)
#define HJKGHIFLLAO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15D29F00)
#define HJKGHIFLLAO_LAMBOEBMBPB_OFFSET UNITYSDK_OFFSET(0x15D29820)
#define HJKGHIFLLAO_MNJOMEBFCHG_OFFSET UNITYSDK_OFFSET(0x15D29640)

inline static constexpr unsigned int HJKGHIFLLAO_TypeDefinitionIndex = 78576;

	class HJKGHIFLLAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HHNFCMJENJI; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* HHFINENIGFL; // 0x18
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Single>*>* DONIAOJDKJM; // 0x20
		::System::Int32 MPCPDFDGDMB; // 0x28
		::System::UInt32 DFHHJKLFEJE; // 0x2C
		::System::UInt32 FIMNPJLNLEE; // 0x30
		::System::Int32 ENCBBDGAPHF; // 0x34
		::System::UInt32 LLDCHLHNADA; // 0x38
		::System::UInt32 GDBJDAOOCOH; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_CTOR_OFFSET))(this);
		}

		::System::Void DANDPNJAPGA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_DANDPNJAPGA_OFFSET))(this, a1, a2);
		}

		::System::Tuple_3<::System::UInt32, ::System::UInt32, ::System::Boolean>* BDHGHGHKLBJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Tuple_3<::System::UInt32, ::System::UInt32, ::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_BDHGHGHKLBJ_OFFSET))(this, a1, a2);
		}

		::System::UInt32 KMBEOLNCACF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_KMBEOLNCACF_OFFSET))(this, a1);
		}

		::System::Void FNPLIANMKHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_FNPLIANMKHN_OFFSET))(this, a1);
		}

		::System::Void BJJKGOPDONF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_BJJKGOPDONF_OFFSET))(this);
		}

		::System::Void MNJOMEBFCHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_MNJOMEBFCHG_OFFSET))(this);
		}

		::System::Boolean JKKNIIHJOKG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_JKKNIIHJOKG_OFFSET))(this, a1);
		}

		::System::Single CLFFEDGPAJM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_CLFFEDGPAJM_OFFSET))(this);
		}

		::System::Void LAMBOEBMBPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_LAMBOEBMBPB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKEPJLDBGIG(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_HKEPJLDBGIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* FJGGODFCDCJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO_FJGGODFCDCJ_OFFSET))(this);
		}

	};
