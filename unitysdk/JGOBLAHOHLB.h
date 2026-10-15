#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class JGOBLAHOHLB;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGOBLAHOHLB_BBIMDNBFOCJ_OFFSET UNITYSDK_OFFSET(0xB1A5A40)
#define JGOBLAHOHLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A6010)
#define JGOBLAHOHLB_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xB1A5790)
#define JGOBLAHOHLB_JCDLGHGLDEL_OFFSET UNITYSDK_OFFSET(0xB1A56F0)
#define JGOBLAHOHLB_LAEELDNCGHL_OFFSET UNITYSDK_OFFSET(0xB1A5180)
#define JGOBLAHOHLB_LHFHPPJCEGA_OFFSET UNITYSDK_OFFSET(0xB1A5EF0)
#define JGOBLAHOHLB_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB1A5630)
#define JGOBLAHOHLB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB1A5540)
#define JGOBLAHOHLB_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xB1A51C0)

inline static constexpr unsigned int JGOBLAHOHLB_TypeDefinitionIndex = 56294;

	class JGOBLAHOHLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* GJJBKFGELLP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IHFMCMFBHLH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBLAHOHLB_CTOR_OFFSET))(this);
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

	};
