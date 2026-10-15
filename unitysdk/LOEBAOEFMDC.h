#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOEBAOEFMDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOEBAOEFMDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98E020)
#define LOEBAOEFMDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98E340)
#define LOEBAOEFMDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E98DBD0)
#define LOEBAOEFMDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E98DB90)
#define LOEBAOEFMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98DB80)
#define LOEBAOEFMDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E98DD40)
#define LOEBAOEFMDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E98DCB0)
#define LOEBAOEFMDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E98DE20)
#define LOEBAOEFMDC_GIHLMAIBCFP_OFFSET UNITYSDK_OFFSET(0x1E98DC90)
#define LOEBAOEFMDC_GPOBHDMPPHN_OFFSET UNITYSDK_OFFSET(0x1E98DCA0)
#define LOEBAOEFMDC_HGNKPBGLALL_OFFSET UNITYSDK_OFFSET(0x1E98DC80)
#define LOEBAOEFMDC_ILDMKDGDOIJ_OFFSET UNITYSDK_OFFSET(0x1E98DC50)
#define LOEBAOEFMDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E98DB10)
#define LOEBAOEFMDC_KEIDPCAGFJC_OFFSET UNITYSDK_OFFSET(0x1E98DC60)
#define LOEBAOEFMDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98E190)
#define LOEBAOEFMDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98E140)
#define LOEBAOEFMDC_OIGDPPKKNOK_OFFSET UNITYSDK_OFFSET(0x1E98DC70)
#define LOEBAOEFMDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E98DB70)
#define LOEBAOEFMDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E98DE50)
#define LOEBAOEFMDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E98DEB0)

inline static constexpr unsigned int LOEBAOEFMDC_TypeDefinitionIndex = 31153;

	class LOEBAOEFMDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JCJNOKBENEM; // 0x18
		::System::Boolean LDCJHFCILFN; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 BFBCDJEFBLH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LOEBAOEFMDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOEBAOEFMDC*>**)UnitySDK::FromName("", "LOEBAOEFMDC")->GetStaticField(0x41270);
		}

		// static const ::System::Object NHPPCLEPFIM; // 0x0
		// static const ::System::Object ODNDKKFAKKD; // 0x0
		// static const ::System::Object CGBCGHFIIHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOEBAOEFMDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOEBAOEFMDC*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOEBAOEFMDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOEBAOEFMDC*>*(*)())((::PBYTE)hIl2Cpp + LOEBAOEFMDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOEBAOEFMDC* Clone()
		{
			return ((::LOEBAOEFMDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CLONE_OFFSET))(this);
		}

		::System::Boolean ILDMKDGDOIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_ILDMKDGDOIJ_OFFSET))(this);
		}

		::System::Void KEIDPCAGFJC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_KEIDPCAGFJC_OFFSET))(this, a1);
		}

		::System::UInt32 OIGDPPKKNOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_OIGDPPKKNOK_OFFSET))(this);
		}

		::System::Void HGNKPBGLALL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_HGNKPBGLALL_OFFSET))(this, a1);
		}

		::System::UInt32 GIHLMAIBCFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_GIHLMAIBCFP_OFFSET))(this);
		}

		::System::Void GPOBHDMPPHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_GPOBHDMPPHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOEBAOEFMDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOEBAOEFMDC*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOEBAOEFMDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOEBAOEFMDC*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOEBAOEFMDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
