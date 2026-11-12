#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCOEGNBGJFC;
class EOKICOIMEPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOKICOIMEPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5E2F10)
#define EOKICOIMEPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5E3290)
#define EOKICOIMEPH_CDFDMHOOAHB_OFFSET UNITYSDK_OFFSET(0x1F5E2A90)
#define EOKICOIMEPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5E2A60)
#define EOKICOIMEPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5E29A0)
#define EOKICOIMEPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E2950)
#define EOKICOIMEPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5E2C10)
#define EOKICOIMEPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5E2AC0)
#define EOKICOIMEPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F5E2AB0)
#define EOKICOIMEPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5E2D30)
#define EOKICOIMEPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5E2910)
#define EOKICOIMEPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5E30C0)
#define EOKICOIMEPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5E3040)
#define EOKICOIMEPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F5E2AA0)
#define EOKICOIMEPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5E2940)
#define EOKICOIMEPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5E2DA0)
#define EOKICOIMEPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5E2E00)

inline static constexpr unsigned int EOKICOIMEPH_TypeDefinitionIndex = 34215;

	class EOKICOIMEPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::BCOEGNBGJFC*>* IPKCBKBCCCI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EOKICOIMEPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOKICOIMEPH*>**)UnitySDK::FromName("", "EOKICOIMEPH")->GetStaticField(0x51F10);
		}

		static ::System::Object** StaticGet_HIOEIAFMOFK()
		{
			return (::System::Object**)UnitySDK::FromName("", "EOKICOIMEPH")->GetStaticField(0x51F18);
		}

		// static const ::System::Object FOGGAAJBEIF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOKICOIMEPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKICOIMEPH*))((::PBYTE)hIl2Cpp + EOKICOIMEPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOKICOIMEPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOKICOIMEPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOKICOIMEPH*>*(*)())((::PBYTE)hIl2Cpp + EOKICOIMEPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOKICOIMEPH* Clone()
		{
			return ((::EOKICOIMEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::BCOEGNBGJFC*>* CDFDMHOOAHB()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::BCOEGNBGJFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_CDFDMHOOAHB_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOKICOIMEPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOKICOIMEPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOKICOIMEPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOKICOIMEPH*))((::PBYTE)hIl2Cpp + EOKICOIMEPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOKICOIMEPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOKICOIMEPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKICOIMEPH*))((::PBYTE)hIl2Cpp + EOKICOIMEPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOKICOIMEPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
