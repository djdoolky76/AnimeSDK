#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLEJGGNFNEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLEJGGNFNEO_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1F2B6C30)
#define BLEJGGNFNEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2B6FC0)
#define BLEJGGNFNEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B7220)
#define BLEJGGNFNEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2B6BD0)
#define BLEJGGNFNEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2B6B90)
#define BLEJGGNFNEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B6B80)
#define BLEJGGNFNEO_EIILAPKJLAN_OFFSET UNITYSDK_OFFSET(0x1F2B6C40)
#define BLEJGGNFNEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2B6D40)
#define BLEJGGNFNEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2B6C60)
#define BLEJGGNFNEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2B6E20)
#define BLEJGGNFNEO_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1F2B6C20)
#define BLEJGGNFNEO_INNNCFICNBP_OFFSET UNITYSDK_OFFSET(0x1F2B6C50)
#define BLEJGGNFNEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2B6B40)
#define BLEJGGNFNEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2B70A0)
#define BLEJGGNFNEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2B7060)
#define BLEJGGNFNEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2B6B70)
#define BLEJGGNFNEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2B6E50)
#define BLEJGGNFNEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2B6EB0)

inline static constexpr unsigned int BLEJGGNFNEO_TypeDefinitionIndex = 29551;

	class BLEJGGNFNEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::Boolean MPMFIGFMHDN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BLEJGGNFNEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BLEJGGNFNEO*>**)UnitySDK::FromName("", "BLEJGGNFNEO")->GetStaticField(0x4F4F0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object MCABJKLHCBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLEJGGNFNEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEJGGNFNEO*))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEJGGNFNEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BLEJGGNFNEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BLEJGGNFNEO*>*(*)())((::PBYTE)hIl2Cpp + BLEJGGNFNEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLEJGGNFNEO* Clone()
		{
			return ((::BLEJGGNFNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean EIILAPKJLAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_EIILAPKJLAN_OFFSET))(this);
		}

		::System::Void INNNCFICNBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_INNNCFICNBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLEJGGNFNEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLEJGGNFNEO*))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLEJGGNFNEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEJGGNFNEO*))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLEJGGNFNEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
