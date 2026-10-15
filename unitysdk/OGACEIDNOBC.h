#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJAABNBJMEH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EJAPAAMOOCH;
class PFMDDEGLECM;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define OGACEIDNOBC_APDEIKMMPIN_OFFSET UNITYSDK_OFFSET(0x1D26D6A0)
#define OGACEIDNOBC_CJPIHGAOFGI_OFFSET UNITYSDK_OFFSET(0x1D26D610)
#define OGACEIDNOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D26BEE0)
#define OGACEIDNOBC_FJJEHBMMNCP_OFFSET UNITYSDK_OFFSET(0x1D26D730)
#define OGACEIDNOBC_GGGHCPBHPAI_OFFSET UNITYSDK_OFFSET(0x1D26D7B0)
#define OGACEIDNOBC_GGMANBOOCHO_OFFSET UNITYSDK_OFFSET(0x1D26D9A0)
#define OGACEIDNOBC_HKCBKOMKBKC_OFFSET UNITYSDK_OFFSET(0x1D26D7E0)
#define OGACEIDNOBC_HPDMJMOOKBH_OFFSET UNITYSDK_OFFSET(0x1D26BF40)
#define OGACEIDNOBC_IKOAABCBIDC_OFFSET UNITYSDK_OFFSET(0x1D26D580)
#define OGACEIDNOBC_LCAMBEGICCM_OFFSET UNITYSDK_OFFSET(0x1D26D530)
#define OGACEIDNOBC_LFEEAICADIO_OFFSET UNITYSDK_OFFSET(0x1D26C0A0)
#define OGACEIDNOBC_MOBDJPFFFID_OFFSET UNITYSDK_OFFSET(0x1D26D7D0)
#define OGACEIDNOBC_NMDDMMILMJL_OFFSET UNITYSDK_OFFSET(0x1D26D510)

inline static constexpr unsigned int OGACEIDNOBC_TypeDefinitionIndex = 10375;

	class OGACEIDNOBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EJAPAAMOOCH*>* PPIDAHOEFKN; // 0x10
		::PFMDDEGLECM* JHMHLCDNGPA; // 0x18
		::System::Collections::Generic::Stack_1<::RPG::GameCore::FixPoint>* BANEIMEKJLM; // 0x20
		::System::Int32 KOLDAFOGHKH; // 0x28
		::System::Boolean GKGBMIOAGNN; // 0x2C
		::System::Byte _padding0[0x3];
		::JJAABNBJMEH NDEGMLLNAMH; // 0x30
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGACEIDNOBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void HPDMJMOOKBH(::System::String* a1, ::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + OGACEIDNOBC_HPDMJMOOKBH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint LFEEAICADIO(::JJAABNBJMEH a1, ::PFMDDEGLECM* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::JJAABNBJMEH, ::PFMDDEGLECM*))((::PBYTE)hIl2Cpp + OGACEIDNOBC_LFEEAICADIO_OFFSET))(this, a1, a2);
		}

		::System::Byte LCAMBEGICCM()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACEIDNOBC_LCAMBEGICCM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IKOAABCBIDC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACEIDNOBC_IKOAABCBIDC_OFFSET))(this);
		}

		::System::Int32 APDEIKMMPIN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACEIDNOBC_APDEIKMMPIN_OFFSET))(this);
		}

		::System::Void CJPIHGAOFGI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OGACEIDNOBC_CJPIHGAOFGI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GGGHCPBHPAI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACEIDNOBC_GGGHCPBHPAI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MOBDJPFFFID(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGACEIDNOBC_MOBDJPFFFID_OFFSET))(this, a1);
		}

		::System::Void HKCBKOMKBKC(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + OGACEIDNOBC_HKCBKOMKBKC_OFFSET))(this, a1, a2);
		}

		::System::Int32 FJJEHBMMNCP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGACEIDNOBC_FJJEHBMMNCP_OFFSET))(this, a1);
		}

		::System::Void GGMANBOOCHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACEIDNOBC_GGMANBOOCHO_OFFSET))(this);
		}

		::System::Void NMDDMMILMJL(::JJAABNBJMEH a1, ::PFMDDEGLECM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJAABNBJMEH, ::PFMDDEGLECM*))((::PBYTE)hIl2Cpp + OGACEIDNOBC_NMDDMMILMJL_OFFSET))(this, a1, a2);
		}

	};
