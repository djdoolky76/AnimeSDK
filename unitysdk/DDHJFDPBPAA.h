#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKONMPOJKP;
class CAGKEDMHEOI;
class DDHJFDPBPAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDHJFDPBPAA_AJKEBMAIMID_OFFSET UNITYSDK_OFFSET(0x1E17DEB0)
#define DDHJFDPBPAA_BEGGOBGFPDN_OFFSET UNITYSDK_OFFSET(0x1E17DEE0)
#define DDHJFDPBPAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17E610)
#define DDHJFDPBPAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17EA90)
#define DDHJFDPBPAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17DDD0)
#define DDHJFDPBPAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17DD10)
#define DDHJFDPBPAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17DD00)
#define DDHJFDPBPAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17E130)
#define DDHJFDPBPAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17DF00)
#define DDHJFDPBPAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E17DED0)
#define DDHJFDPBPAA_FMMIADHAKOB_OFFSET UNITYSDK_OFFSET(0x1E17DEF0)
#define DDHJFDPBPAA_FNHACMDCDLJ_OFFSET UNITYSDK_OFFSET(0x1E17DEA0)
#define DDHJFDPBPAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17E360)
#define DDHJFDPBPAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17DCC0)
#define DDHJFDPBPAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17E850)
#define DDHJFDPBPAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17E720)
#define DDHJFDPBPAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E17DEC0)
#define DDHJFDPBPAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17DCF0)
#define DDHJFDPBPAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17E470)
#define DDHJFDPBPAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17E4D0)

	class DDHJFDPBPAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* HPEJOGGPEDN; // 0x18
		::AGKONMPOJKP* HICKDGBJGJM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDHJFDPBPAA")->GetStaticField(0x2DC30);
		}

		// static const ::System::Object GNKPEGMOLPM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LKIIPDMBEFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDHJFDPBPAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDHJFDPBPAA*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHJFDPBPAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDHJFDPBPAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDHJFDPBPAA* Clone()
		{
			return ((::DDHJFDPBPAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* FNHACMDCDLJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_FNHACMDCDLJ_OFFSET))(this);
		}

		::System::Void AJKEBMAIMID(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_AJKEBMAIMID_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::AGKONMPOJKP* BEGGOBGFPDN()
		{
			return ((::AGKONMPOJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_BEGGOBGFPDN_OFFSET))(this);
		}

		::System::Void FMMIADHAKOB(::AGKONMPOJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGKONMPOJKP*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_FMMIADHAKOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDHJFDPBPAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDHJFDPBPAA*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDHJFDPBPAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDHJFDPBPAA*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDHJFDPBPAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
