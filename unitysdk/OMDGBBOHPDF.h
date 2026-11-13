#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMDGBBOHPDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMDGBBOHPDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD70530)
#define OMDGBBOHPDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD70800)
#define OMDGBBOHPDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD70180)
#define OMDGBBOHPDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD70150)
#define OMDGBBOHPDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD70140)
#define OMDGBBOHPDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD702F0)
#define OMDGBBOHPDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD70210)
#define OMDGBBOHPDF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FD70200)
#define OMDGBBOHPDF_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1FD701D0)
#define OMDGBBOHPDF_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1FD701E0)
#define OMDGBBOHPDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD703C0)
#define OMDGBBOHPDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD70100)
#define OMDGBBOHPDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD70680)
#define OMDGBBOHPDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD70640)
#define OMDGBBOHPDF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FD701F0)
#define OMDGBBOHPDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD70130)
#define OMDGBBOHPDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD703F0)
#define OMDGBBOHPDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD70450)

inline static constexpr unsigned int OMDGBBOHPDF_TypeDefinitionIndex = 27113;

	class OMDGBBOHPDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GKOHBFHOFKN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OMDGBBOHPDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMDGBBOHPDF*>**)UnitySDK::FromName("", "OMDGBBOHPDF")->GetStaticField(0x22440);
		}

		// static const ::System::Object OOGFOPMFOHP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMDGBBOHPDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMDGBBOHPDF*))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMDGBBOHPDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMDGBBOHPDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMDGBBOHPDF*>*(*)())((::PBYTE)hIl2Cpp + OMDGBBOHPDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMDGBBOHPDF* Clone()
		{
			return ((::OMDGBBOHPDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMDGBBOHPDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMDGBBOHPDF*))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMDGBBOHPDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMDGBBOHPDF*))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMDGBBOHPDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
