#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCAJNMLLIED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D6DC0)
#define BCAJNMLLIED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D70F0)
#define BCAJNMLLIED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D6890)
#define BCAJNMLLIED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D67F0)
#define BCAJNMLLIED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D67A0)
#define BCAJNMLLIED_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E8D6900)
#define BCAJNMLLIED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D69B0)
#define BCAJNMLLIED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D6930)
#define BCAJNMLLIED_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E8D68D0)
#define BCAJNMLLIED_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E8D68E0)
#define BCAJNMLLIED_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E8D6910)
#define BCAJNMLLIED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D6AC0)
#define BCAJNMLLIED_HIFKJHPGLMD_OFFSET UNITYSDK_OFFSET(0x1E8D6920)
#define BCAJNMLLIED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D6760)
#define BCAJNMLLIED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D6FF0)
#define BCAJNMLLIED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D6F90)
#define BCAJNMLLIED_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E8D68F0)
#define BCAJNMLLIED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D6790)
#define BCAJNMLLIED_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E8D68C0)
#define BCAJNMLLIED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D6BD0)
#define BCAJNMLLIED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D6C30)

inline static constexpr unsigned int BCAJNMLLIED_TypeDefinitionIndex = 32448;

	class BCAJNMLLIED : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CEBNOBFDFMN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x20
		::System::UInt32 DBHLHPDBNFD; // 0x24
		::System::UInt32 NDFIDCNNGMJ; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HGCIDMGFDIA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BCAJNMLLIED")->GetStaticField(0x501E0);
		}

		static ::Google::Protobuf::MessageParser_1<::BCAJNMLLIED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCAJNMLLIED*>**)UnitySDK::FromName("", "BCAJNMLLIED")->GetStaticField(0x501E8);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object GNNJJBBMEJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCAJNMLLIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCAJNMLLIED*))((::PBYTE)hIl2Cpp + BCAJNMLLIED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCAJNMLLIED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCAJNMLLIED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCAJNMLLIED*>*(*)())((::PBYTE)hIl2Cpp + BCAJNMLLIED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCAJNMLLIED* Clone()
		{
			return ((::BCAJNMLLIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCAJNMLLIED_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCAJNMLLIED_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCAJNMLLIED_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIFKJHPGLMD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_HIFKJHPGLMD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCAJNMLLIED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCAJNMLLIED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCAJNMLLIED*))((::PBYTE)hIl2Cpp + BCAJNMLLIED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCAJNMLLIED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCAJNMLLIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCAJNMLLIED*))((::PBYTE)hIl2Cpp + BCAJNMLLIED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCAJNMLLIED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
