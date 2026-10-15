#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGLIMCBGLAJ.h"
#include "unitysdk/System/Object.h"
class JEGBMCKBMOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEGBMCKBMOB_AFABEKGPANM_OFFSET UNITYSDK_OFFSET(0x1E6EB610)
#define JEGBMCKBMOB_BAOGBDMBEPF_OFFSET UNITYSDK_OFFSET(0x1E6EB650)
#define JEGBMCKBMOB_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0x1E6EB680)
#define JEGBMCKBMOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6EBA20)
#define JEGBMCKBMOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EBE30)
#define JEGBMCKBMOB_CGNGDBGELIL_OFFSET UNITYSDK_OFFSET(0x1E6EB6A0)
#define JEGBMCKBMOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6EB5C0)
#define JEGBMCKBMOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6EB580)
#define JEGBMCKBMOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EB570)
#define JEGBMCKBMOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6EB710)
#define JEGBMCKBMOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6EB6B0)
#define JEGBMCKBMOB_FJNNGCOGMEH_OFFSET UNITYSDK_OFFSET(0x1E6EB660)
#define JEGBMCKBMOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6EB760)
#define JEGBMCKBMOB_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x1E6EB670)
#define JEGBMCKBMOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6EB530)
#define JEGBMCKBMOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6EBD80)
#define JEGBMCKBMOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6EBD20)
#define JEGBMCKBMOB_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E6EB640)
#define JEGBMCKBMOB_NHKCGFKENDE_OFFSET UNITYSDK_OFFSET(0x1E6EB690)
#define JEGBMCKBMOB_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E6EB630)
#define JEGBMCKBMOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6EB560)
#define JEGBMCKBMOB_PEFHFBFAIPA_OFFSET UNITYSDK_OFFSET(0x1E6EB620)
#define JEGBMCKBMOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6EB7A0)
#define JEGBMCKBMOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6EB800)

inline static constexpr unsigned int JEGBMCKBMOB_TypeDefinitionIndex = 28664;

	class JEGBMCKBMOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BGLIMCBGLAJ CLBJDBPOOEK; // 0x18
		::BGLIMCBGLAJ IOFJFNCNMOJ; // 0x1C
		::System::UInt32 FBMCDOLAPMP; // 0x20
		::System::UInt32 LNANIJGDKHP; // 0x24
		::System::UInt32 ABPDPMHFFNN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::JEGBMCKBMOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEGBMCKBMOB*>**)UnitySDK::FromName("", "JEGBMCKBMOB")->GetStaticField(0x5C550);
		}

		// static const ::System::Object PKLGJOBKFBO; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object FMPGPNNAFBO; // 0x0
		// static const ::System::Object CJIHHBEOLPP; // 0x0
		// static const ::System::Object DEGCCPJFHMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEGBMCKBMOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGBMCKBMOB*))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGBMCKBMOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEGBMCKBMOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEGBMCKBMOB*>*(*)())((::PBYTE)hIl2Cpp + JEGBMCKBMOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEGBMCKBMOB* Clone()
		{
			return ((::JEGBMCKBMOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFABEKGPANM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_AFABEKGPANM_OFFSET))(this);
		}

		::System::Void PEFHFBFAIPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_PEFHFBFAIPA_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 BAOGBDMBEPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_BAOGBDMBEPF_OFFSET))(this);
		}

		::System::Void FJNNGCOGMEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_FJNNGCOGMEH_OFFSET))(this, a1);
		}

		::BGLIMCBGLAJ JHHECJIODKO()
		{
			return ((::BGLIMCBGLAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::BGLIMCBGLAJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLIMCBGLAJ))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::BGLIMCBGLAJ NHKCGFKENDE()
		{
			return ((::BGLIMCBGLAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_NHKCGFKENDE_OFFSET))(this);
		}

		::System::Void CGNGDBGELIL(::BGLIMCBGLAJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLIMCBGLAJ))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_CGNGDBGELIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEGBMCKBMOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEGBMCKBMOB*))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEGBMCKBMOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGBMCKBMOB*))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEGBMCKBMOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
