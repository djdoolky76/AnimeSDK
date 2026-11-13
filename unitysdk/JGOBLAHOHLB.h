#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class JGOBLAHOHLB;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGOBLAHOHLB_BBIMDNBFOCJ_OFFSET UNITYSDK_OFFSET(0x1935A7E0)
#define JGOBLAHOHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x19359D60)
#define JGOBLAHOHLB_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x1935A460)
#define JGOBLAHOHLB_IAHKPNOENCE_OFFSET UNITYSDK_OFFSET(0x1935A6F0)
#define JGOBLAHOHLB_JCDLGHGLDEL_OFFSET UNITYSDK_OFFSET(0x1935A3C0)
#define JGOBLAHOHLB_KKADFBHIPKI_OFFSET UNITYSDK_OFFSET(0x1935AE70)
#define JGOBLAHOHLB_LAEELDNCGHL_OFFSET UNITYSDK_OFFSET(0x19359E40)
#define JGOBLAHOHLB_LHFHPPJCEGA_OFFSET UNITYSDK_OFFSET(0x1935AC90)
#define JGOBLAHOHLB_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1935A300)
#define JGOBLAHOHLB_PFAPFKDPDMO_OFFSET UNITYSDK_OFFSET(0x1935ADA0)
#define JGOBLAHOHLB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1935A210)
#define JGOBLAHOHLB_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x19359E80)

inline static constexpr unsigned int JGOBLAHOHLB_TypeDefinitionIndex = 57508;

	class JGOBLAHOHLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* GJJBKFGELLP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IHFMCMFBHLH; // 0x18
		::System::Int32 BNPCLOPOJAC; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* LAEELDNCGHL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_LAEELDNCGHL_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::JGOBLAHOHLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGOBLAHOHLB*))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void JCDLGHGLDEL(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_JCDLGHGLDEL_OFFSET))(this, a1, a2);
		}

		::System::Void HMPDCLHIPHI(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_HMPDCLHIPHI_OFFSET))(this, a1, a2);
		}

		::System::Void BBIMDNBFOCJ(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_BBIMDNBFOCJ_OFFSET))(this, a1);
		}

		::System::Void LHFHPPJCEGA(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_LHFHPPJCEGA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint KKADFBHIPKI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_KKADFBHIPKI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PFAPFKDPDMO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_PFAPFKDPDMO_OFFSET))(this, a1);
		}

		::System::UInt32 IAHKPNOENCE(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_IAHKPNOENCE_OFFSET))(this, a1);
		}

	};
