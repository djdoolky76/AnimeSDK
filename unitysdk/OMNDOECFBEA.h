#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNDOECFBEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMNDOECFBEA_AJCFIMDGHDP_OFFSET UNITYSDK_OFFSET(0x1DE8ED30)
#define OMNDOECFBEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8F210)
#define OMNDOECFBEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8F530)
#define OMNDOECFBEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8ECE0)
#define OMNDOECFBEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8EC40)
#define OMNDOECFBEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8EBF0)
#define OMNDOECFBEA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1DE8ED50)
#define OMNDOECFBEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8EE00)
#define OMNDOECFBEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8ED80)
#define OMNDOECFBEA_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1DE8ED20)
#define OMNDOECFBEA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1DE8ED60)
#define OMNDOECFBEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8EF10)
#define OMNDOECFBEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8EBB0)
#define OMNDOECFBEA_LFMFEIEPKLF_OFFSET UNITYSDK_OFFSET(0x1DE8ED40)
#define OMNDOECFBEA_LHJLFBKEFOB_OFFSET UNITYSDK_OFFSET(0x1DE8ED70)
#define OMNDOECFBEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE8F440)
#define OMNDOECFBEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE8F3E0)
#define OMNDOECFBEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8EBE0)
#define OMNDOECFBEA_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1DE8ED10)
#define OMNDOECFBEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8F020)
#define OMNDOECFBEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8F080)

inline static constexpr unsigned int OMNDOECFBEA_TypeDefinitionIndex = 25942;

	class OMNDOECFBEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DIMOODELGMH; // 0x18
		::System::UInt32 JBIFGHINGNI; // 0x20
		::System::UInt32 DBHLHPDBNFD; // 0x24
		::System::UInt32 GEMFJILOPLL; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OMNDOECFBEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMNDOECFBEA*>**)UnitySDK::FromName("", "OMNDOECFBEA")->GetStaticField(0x234C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKNFJPHOJPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OMNDOECFBEA")->GetStaticField(0x234C8);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object MDCCJOGJACF; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object IGDHEJKEGKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMNDOECFBEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNDOECFBEA*))((::PBYTE)hIl2Cpp + OMNDOECFBEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNDOECFBEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMNDOECFBEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMNDOECFBEA*>*(*)())((::PBYTE)hIl2Cpp + OMNDOECFBEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMNDOECFBEA* Clone()
		{
			return ((::OMNDOECFBEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMNDOECFBEA_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 AJCFIMDGHDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_AJCFIMDGHDP_OFFSET))(this);
		}

		::System::Void LFMFEIEPKLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMNDOECFBEA_LFMFEIEPKLF_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMNDOECFBEA_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LHJLFBKEFOB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_LHJLFBKEFOB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMNDOECFBEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMNDOECFBEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMNDOECFBEA*))((::PBYTE)hIl2Cpp + OMNDOECFBEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMNDOECFBEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMNDOECFBEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNDOECFBEA*))((::PBYTE)hIl2Cpp + OMNDOECFBEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMNDOECFBEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
