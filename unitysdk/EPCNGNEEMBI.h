#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class EPCNGNEEMBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPCNGNEEMBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E307C90)
#define EPCNGNEEMBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E307FA0)
#define EPCNGNEEMBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E307880)
#define EPCNGNEEMBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E307850)
#define EPCNGNEEMBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E307840)
#define EPCNGNEEMBI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E307910)
#define EPCNGNEEMBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E307A40)
#define EPCNGNEEMBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E307930)
#define EPCNGNEEMBI_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E307900)
#define EPCNGNEEMBI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E307920)
#define EPCNGNEEMBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E307B10)
#define EPCNGNEEMBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3077D0)
#define EPCNGNEEMBI_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E3078F0)
#define EPCNGNEEMBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E307E20)
#define EPCNGNEEMBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E307DE0)
#define EPCNGNEEMBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E307830)
#define EPCNGNEEMBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E307B40)
#define EPCNGNEEMBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E307BA0)

inline static constexpr unsigned int EPCNGNEEMBI_TypeDefinitionIndex = 28654;

	class EPCNGNEEMBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EPCNGNEEMBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPCNGNEEMBI*>**)UnitySDK::FromName("", "EPCNGNEEMBI")->GetStaticField(0x55960);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPCNGNEEMBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPCNGNEEMBI*))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPCNGNEEMBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPCNGNEEMBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPCNGNEEMBI*>*(*)())((::PBYTE)hIl2Cpp + EPCNGNEEMBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPCNGNEEMBI* Clone()
		{
			return ((::EPCNGNEEMBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPCNGNEEMBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPCNGNEEMBI*))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPCNGNEEMBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPCNGNEEMBI*))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPCNGNEEMBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
