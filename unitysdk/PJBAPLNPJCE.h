#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
namespace Google::Protobuf { class ByteString; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PJBAPLNPJCE_BLJAOPKDOKJ_OFFSET UNITYSDK_OFFSET(0xC27B430)
#define PJBAPLNPJCE_CNMCCIGKDNF_OFFSET UNITYSDK_OFFSET(0xC27AE70)
#define PJBAPLNPJCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC27B6D0)
#define PJBAPLNPJCE_FFALMOPIEND_OFFSET UNITYSDK_OFFSET(0xC27AC80)
#define PJBAPLNPJCE_LAPPCCOFMPL_OFFSET UNITYSDK_OFFSET(0xC27B300)

	class PJBAPLNPJCE : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_GBKLKFDBLDH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJBAPLNPJCE")->GetStaticField(0x15A20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBAPLNPJCE_CTOR_OFFSET))(this);
		}

		::System::Void FFALMOPIEND(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + PJBAPLNPJCE_FFALMOPIEND_OFFSET))(this, a1);
		}

		::System::Void CNMCCIGKDNF(::System::Collections::Generic::IList_1<::LOKBAGIKJHB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::LOKBAGIKJHB*>*))((::PBYTE)hIl2Cpp + PJBAPLNPJCE_CNMCCIGKDNF_OFFSET))(this, a1);
		}

		::System::Void LAPPCCOFMPL(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + PJBAPLNPJCE_LAPPCCOFMPL_OFFSET))(this, a1);
		}

		static ::System::Void BLJAOPKDOKJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBAPLNPJCE_BLJAOPKDOKJ_OFFSET))();
		}

	};
