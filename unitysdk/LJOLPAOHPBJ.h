#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFACLOGFNJF;
class LJOLPAOHPBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJOLPAOHPBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E989E30)
#define LJOLPAOHPBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98A190)
#define LJOLPAOHPBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9898E0)
#define LJOLPAOHPBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E989870)
#define LJOLPAOHPBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E989860)
#define LJOLPAOHPBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E989B20)
#define LJOLPAOHPBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9899A0)
#define LJOLPAOHPBJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E989990)
#define LJOLPAOHPBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E989CA0)
#define LJOLPAOHPBJ_IMHIOGCKGIF_OFFSET UNITYSDK_OFFSET(0x1E989960)
#define LJOLPAOHPBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E989820)
#define LJOLPAOHPBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E989FB0)
#define LJOLPAOHPBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E989F00)
#define LJOLPAOHPBJ_NBEIAFHAJOI_OFFSET UNITYSDK_OFFSET(0x1E989970)
#define LJOLPAOHPBJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E989980)
#define LJOLPAOHPBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E989850)
#define LJOLPAOHPBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E989CF0)
#define LJOLPAOHPBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E989D50)

inline static constexpr unsigned int LJOLPAOHPBJ_TypeDefinitionIndex = 27413;

	class LJOLPAOHPBJ : public ::System::Object
	{
	public:
		::KFACLOGFNJF* NJIGKFFGPLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LJOLPAOHPBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJOLPAOHPBJ*>**)UnitySDK::FromName("", "LJOLPAOHPBJ")->GetStaticField(0x49C50);
		}

		// static const ::System::Object NNOBLNPPJGB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJOLPAOHPBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJOLPAOHPBJ*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJOLPAOHPBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJOLPAOHPBJ*>*(*)())((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJOLPAOHPBJ* Clone()
		{
			return ((::LJOLPAOHPBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_CLONE_OFFSET))(this);
		}

		::KFACLOGFNJF* IMHIOGCKGIF()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_IMHIOGCKGIF_OFFSET))(this);
		}

		::System::Void NBEIAFHAJOI(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_NBEIAFHAJOI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJOLPAOHPBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJOLPAOHPBJ*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJOLPAOHPBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJOLPAOHPBJ*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
