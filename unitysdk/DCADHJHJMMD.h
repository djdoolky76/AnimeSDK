#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCADHJHJMMD;
class HHAGOFKBFAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCADHJHJMMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E165D10)
#define DCADHJHJMMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E166020)
#define DCADHJHJMMD_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E165850)
#define DCADHJHJMMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1657D0)
#define DCADHJHJMMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E165770)
#define DCADHJHJMMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E165760)
#define DCADHJHJMMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E165A00)
#define DCADHJHJMMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E165880)
#define DCADHJHJMMD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E165870)
#define DCADHJHJMMD_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E165840)
#define DCADHJHJMMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E165B80)
#define DCADHJHJMMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E165720)
#define DCADHJHJMMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E165E70)
#define DCADHJHJMMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E165DE0)
#define DCADHJHJMMD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E165860)
#define DCADHJHJMMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E165750)
#define DCADHJHJMMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E165BD0)
#define DCADHJHJMMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E165C30)

inline static constexpr unsigned int DCADHJHJMMD_TypeDefinitionIndex = 32946;

	class DCADHJHJMMD : public ::System::Object
	{
	public:
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DCADHJHJMMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCADHJHJMMD*>**)UnitySDK::FromName("", "DCADHJHJMMD")->GetStaticField(0x26400);
		}

		// static const ::System::Object LNNFMNLEBGM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCADHJHJMMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCADHJHJMMD*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCADHJHJMMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCADHJHJMMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCADHJHJMMD*>*(*)())((::PBYTE)hIl2Cpp + DCADHJHJMMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCADHJHJMMD* Clone()
		{
			return ((::DCADHJHJMMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_CLONE_OFFSET))(this);
		}

		::HHAGOFKBFAP* FENEPOCNAPP()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCADHJHJMMD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCADHJHJMMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCADHJHJMMD*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCADHJHJMMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCADHJHJMMD*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCADHJHJMMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
