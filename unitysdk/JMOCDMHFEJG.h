#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMOCDMHFEJG;
class PIBFIDOEPAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMOCDMHFEJG_BCPPNMONIHG_OFFSET UNITYSDK_OFFSET(0x1E78F9E0)
#define JMOCDMHFEJG_BPIHJMFFLDB_OFFSET UNITYSDK_OFFSET(0x1E78F9D0)
#define JMOCDMHFEJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E78FFB0)
#define JMOCDMHFEJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E790250)
#define JMOCDMHFEJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78F8F0)
#define JMOCDMHFEJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78F860)
#define JMOCDMHFEJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78F850)
#define JMOCDMHFEJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E78FB90)
#define JMOCDMHFEJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78F9F0)
#define JMOCDMHFEJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E78FE60)
#define JMOCDMHFEJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E78F7E0)
#define JMOCDMHFEJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7900C0)
#define JMOCDMHFEJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E790010)
#define JMOCDMHFEJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E78F840)
#define JMOCDMHFEJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E78FEC0)
#define JMOCDMHFEJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E78FF20)

inline static constexpr unsigned int JMOCDMHFEJG_TypeDefinitionIndex = 28873;

	class JMOCDMHFEJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PIBFIDOEPAP* IGALDGLEFAK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JMOCDMHFEJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMOCDMHFEJG*>**)UnitySDK::FromName("", "JMOCDMHFEJG")->GetStaticField(0x6C390);
		}

		// static const ::System::Object COPKBJAIKMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMOCDMHFEJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMOCDMHFEJG*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMOCDMHFEJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMOCDMHFEJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMOCDMHFEJG*>*(*)())((::PBYTE)hIl2Cpp + JMOCDMHFEJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMOCDMHFEJG* Clone()
		{
			return ((::JMOCDMHFEJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_CLONE_OFFSET))(this);
		}

		::PIBFIDOEPAP* BPIHJMFFLDB()
		{
			return ((::PIBFIDOEPAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_BPIHJMFFLDB_OFFSET))(this);
		}

		::System::Void BCPPNMONIHG(::PIBFIDOEPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBFIDOEPAP*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_BCPPNMONIHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMOCDMHFEJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMOCDMHFEJG*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMOCDMHFEJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMOCDMHFEJG*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMOCDMHFEJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
