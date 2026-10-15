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

#define EOKICOIMEPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D0A80)
#define EOKICOIMEPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D0DE0)
#define EOKICOIMEPH_CDFDMHOOAHB_OFFSET UNITYSDK_OFFSET(0x1E2D0620)
#define EOKICOIMEPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D05D0)
#define EOKICOIMEPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D0510)
#define EOKICOIMEPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D04C0)
#define EOKICOIMEPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D0780)
#define EOKICOIMEPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D0630)
#define EOKICOIMEPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2D0610)
#define EOKICOIMEPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D08B0)
#define EOKICOIMEPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D0480)
#define EOKICOIMEPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D0C10)
#define EOKICOIMEPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D0B90)
#define EOKICOIMEPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2D0600)
#define EOKICOIMEPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D04B0)
#define EOKICOIMEPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D0920)
#define EOKICOIMEPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D0980)

inline static constexpr unsigned int EOKICOIMEPH_TypeDefinitionIndex = 33300;

	class EOKICOIMEPH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::BCOEGNBGJFC*>* IPKCBKBCCCI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::System::Object** StaticGet_HIOEIAFMOFK()
		{
			return (::System::Object**)UnitySDK::FromName("", "EOKICOIMEPH")->GetStaticField(0x47230);
		}

		static ::Google::Protobuf::MessageParser_1<::EOKICOIMEPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOKICOIMEPH*>**)UnitySDK::FromName("", "EOKICOIMEPH")->GetStaticField(0x47238);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FOGGAAJBEIF; // 0x0
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

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOKICOIMEPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::BCOEGNBGJFC*>* CDFDMHOOAHB()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::BCOEGNBGJFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH_CDFDMHOOAHB_OFFSET))(this);
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
