#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIMNHEENPP;
class BCCONKJHDJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALIMNHEENPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E0D70)
#define ALIMNHEENPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E1210)
#define ALIMNHEENPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E0820)
#define ALIMNHEENPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E0760)
#define ALIMNHEENPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0710)
#define ALIMNHEENPP_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1E4E0850)
#define ALIMNHEENPP_EGLHILJHOIK_OFFSET UNITYSDK_OFFSET(0x1E4E0870)
#define ALIMNHEENPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E0A00)
#define ALIMNHEENPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E08A0)
#define ALIMNHEENPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E0B30)
#define ALIMNHEENPP_IJBGHKABIFJ_OFFSET UNITYSDK_OFFSET(0x1E4E0880)
#define ALIMNHEENPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E06D0)
#define ALIMNHEENPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E0FB0)
#define ALIMNHEENPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E0F00)
#define ALIMNHEENPP_NJDANNIEFBP_OFFSET UNITYSDK_OFFSET(0x1E4E0890)
#define ALIMNHEENPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0700)
#define ALIMNHEENPP_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1E4E0860)
#define ALIMNHEENPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E0BA0)
#define ALIMNHEENPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E0C00)

inline static constexpr unsigned int ALIMNHEENPP_TypeDefinitionIndex = 25402;

	class ALIMNHEENPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* ICDEKMHKOPI; // 0x18
		::System::UInt32 LPPKENBDKMI; // 0x20
		::System::UInt32 NNLJKKAEICI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::ALIMNHEENPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALIMNHEENPP*>**)UnitySDK::FromName("", "ALIMNHEENPP")->GetStaticField(0x42100);
		}

		static ::Google::Protobuf::FieldCodec_1<::BCCONKJHDJL*>** StaticGet_DADAKEPPNJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCCONKJHDJL*>**)UnitySDK::FromName("", "ALIMNHEENPP")->GetStaticField(0x42108);
		}

		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object ALMJNAAHNGD; // 0x0
		// static const ::System::Object JNJOCAPOIIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALIMNHEENPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIMNHEENPP*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIMNHEENPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALIMNHEENPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALIMNHEENPP*>*(*)())((::PBYTE)hIl2Cpp + ALIMNHEENPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALIMNHEENPP* Clone()
		{
			return ((::ALIMNHEENPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALIMNHEENPP_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* EGLHILJHOIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_EGLHILJHOIK_OFFSET))(this);
		}

		::System::UInt32 IJBGHKABIFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_IJBGHKABIFJ_OFFSET))(this);
		}

		::System::Void NJDANNIEFBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALIMNHEENPP_NJDANNIEFBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALIMNHEENPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALIMNHEENPP*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALIMNHEENPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIMNHEENPP*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
