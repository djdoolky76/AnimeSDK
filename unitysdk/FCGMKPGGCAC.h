#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKBFMCOIHK;
class FCGMKPGGCAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCGMKPGGCAC_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E345D50)
#define FCGMKPGGCAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E346220)
#define FCGMKPGGCAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E346690)
#define FCGMKPGGCAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E345D20)
#define FCGMKPGGCAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E345C40)
#define FCGMKPGGCAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E345C00)
#define FCGMKPGGCAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E345DD0)
#define FCGMKPGGCAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E345DA0)
#define FCGMKPGGCAC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E345D80)
#define FCGMKPGGCAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E345FB0)
#define FCGMKPGGCAC_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x1E345D90)
#define FCGMKPGGCAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E345BC0)
#define FCGMKPGGCAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E346490)
#define FCGMKPGGCAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E346370)
#define FCGMKPGGCAC_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E345D60)
#define FCGMKPGGCAC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E345D70)
#define FCGMKPGGCAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E345BF0)
#define FCGMKPGGCAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E346050)
#define FCGMKPGGCAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3460B0)

inline static constexpr unsigned int FCGMKPGGCAC_TypeDefinitionIndex = 30867;

	class FCGMKPGGCAC : public ::System::Object
	{
	public:
		::AMKBFMCOIHK* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AMKBFMCOIHK*>* EFHEPAJIOHG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FCGMKPGGCAC")->GetStaticField(0x5A1B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FCGMKPGGCAC")->GetStaticField(0x5A1B8);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDPIDBDJDLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCGMKPGGCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCGMKPGGCAC*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCGMKPGGCAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FCGMKPGGCAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCGMKPGGCAC* Clone()
		{
			return ((::FCGMKPGGCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_CLONE_OFFSET))(this);
		}

		::AMKBFMCOIHK* ANALOEDDDHD()
		{
			return ((::AMKBFMCOIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::AMKBFMCOIHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMKBFMCOIHK*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AMKBFMCOIHK*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AMKBFMCOIHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_INJLCGGALGC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCGMKPGGCAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCGMKPGGCAC*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCGMKPGGCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCGMKPGGCAC*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCGMKPGGCAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
