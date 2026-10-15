#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/LFKJCGCCIOA.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MLPOPBACEFJ_CHKMLOBOAIO_OFFSET UNITYSDK_OFFSET(0xB9BBA10)
#define MLPOPBACEFJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9BB8D0)
#define MLPOPBACEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BCC40)
#define MLPOPBACEFJ_EIFEPMHOHDI_OFFSET UNITYSDK_OFFSET(0xB9BC0C0)
#define MLPOPBACEFJ_FLDJJCJLFAP_OFFSET UNITYSDK_OFFSET(0xB9BCC00)
#define MLPOPBACEFJ_JBJBODMFIEE_OFFSET UNITYSDK_OFFSET(0xB9BC670)
#define MLPOPBACEFJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9BBC70)
#define MLPOPBACEFJ_NDPEJMIDLJE_OFFSET UNITYSDK_OFFSET(0xB9BC5E0)
#define MLPOPBACEFJ_OGGNJFHIOFG_OFFSET UNITYSDK_OFFSET(0xB9BBE20)
#define MLPOPBACEFJ_ONJDGBDCABB_OFFSET UNITYSDK_OFFSET(0xB9BC450)

	class MLPOPBACEFJ : public ::LFKJCGCCIOA
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* MNBHCHNNKLG; // 0x20
		::RPG::PoolHashSet_1<::System::UInt32>* BAGOBLJNCBD; // 0x28
		::System::UInt32 IGCPFAEHOBD; // 0x30
		::System::Boolean OLMPKOFCIHF; // 0x34
		::System::Byte _padding0[0x3];
		::KLNKLOMDIIC MJKLCJGJEIG; // 0x38
		static ::System::Int32* StaticGet_HLNJFOJALNB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MLPOPBACEFJ")->GetStaticField(0x2B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HIOEAKHGILF* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OGGNJFHIOFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_OGGNJFHIOFG_OFFSET))(this);
		}

		::System::Void CHKMLOBOAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_CHKMLOBOAIO_OFFSET))(this);
		}

		::System::Void NDPEJMIDLJE(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_NDPEJMIDLJE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ONJDGBDCABB(::System::UInt32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimView* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::FiveDimView*))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_ONJDGBDCABB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* JBJBODMFIEE(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_JBJBODMFIEE_OFFSET))(this, a1);
		}

		::System::Void EIFEPMHOHDI(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_EIFEPMHOHDI_OFFSET))(this, a1, a2);
		}

		::System::Void FLDJJCJLFAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPOPBACEFJ_FLDJJCJLFAP_OFFSET))(this);
		}

	};
