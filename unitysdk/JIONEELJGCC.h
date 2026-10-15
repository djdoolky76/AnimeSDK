#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMBJCONBAE;
class JIONEELJGCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIONEELJGCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E729350)
#define JIONEELJGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7296F0)
#define JIONEELJGCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E728CB0)
#define JIONEELJGCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E728C20)
#define JIONEELJGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E728C10)
#define JIONEELJGCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E728F40)
#define JIONEELJGCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E728DA0)
#define JIONEELJGCC_FGEDFNIMMHO_OFFSET UNITYSDK_OFFSET(0x1E728D90)
#define JIONEELJGCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E729210)
#define JIONEELJGCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E728BA0)
#define JIONEELJGCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7294D0)
#define JIONEELJGCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7293B0)
#define JIONEELJGCC_MOPOBFLBMKO_OFFSET UNITYSDK_OFFSET(0x1E728D80)
#define JIONEELJGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E728C00)
#define JIONEELJGCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E729260)
#define JIONEELJGCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7292C0)

inline static constexpr unsigned int JIONEELJGCC_TypeDefinitionIndex = 25600;

	class JIONEELJGCC : public ::System::Object
	{
	public:
		::FIMBJCONBAE* EEJDAKCJOHI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JIONEELJGCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIONEELJGCC*>**)UnitySDK::FromName("", "JIONEELJGCC")->GetStaticField(0x60530);
		}

		// static const ::System::Object HOGOLOIIFKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIONEELJGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIONEELJGCC*))((::PBYTE)hIl2Cpp + JIONEELJGCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIONEELJGCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIONEELJGCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIONEELJGCC*>*(*)())((::PBYTE)hIl2Cpp + JIONEELJGCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIONEELJGCC* Clone()
		{
			return ((::JIONEELJGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_CLONE_OFFSET))(this);
		}

		::FIMBJCONBAE* MOPOBFLBMKO()
		{
			return ((::FIMBJCONBAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_MOPOBFLBMKO_OFFSET))(this);
		}

		::System::Void FGEDFNIMMHO(::FIMBJCONBAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMBJCONBAE*))((::PBYTE)hIl2Cpp + JIONEELJGCC_FGEDFNIMMHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIONEELJGCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIONEELJGCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIONEELJGCC*))((::PBYTE)hIl2Cpp + JIONEELJGCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIONEELJGCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIONEELJGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIONEELJGCC*))((::PBYTE)hIl2Cpp + JIONEELJGCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIONEELJGCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
