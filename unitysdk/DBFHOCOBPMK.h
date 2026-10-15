#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDMFOJKAHFC;
class DBFHOCOBPMK;
class NIFNAMDEPIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBFHOCOBPMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12D1F0)
#define DBFHOCOBPMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12D6F0)
#define DBFHOCOBPMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12CCB0)
#define DBFHOCOBPMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12CB80)
#define DBFHOCOBPMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12CB30)
#define DBFHOCOBPMK_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E12CD30)
#define DBFHOCOBPMK_ELJGHDACIOA_OFFSET UNITYSDK_OFFSET(0x1E12CD20)
#define DBFHOCOBPMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12CDB0)
#define DBFHOCOBPMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12CD50)
#define DBFHOCOBPMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12CF90)
#define DBFHOCOBPMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12CAC0)
#define DBFHOCOBPMK_LLGMBJPEMEL_OFFSET UNITYSDK_OFFSET(0x1E12CD10)
#define DBFHOCOBPMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12D490)
#define DBFHOCOBPMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12D360)
#define DBFHOCOBPMK_MHMIDNIGIDL_OFFSET UNITYSDK_OFFSET(0x1E12CD00)
#define DBFHOCOBPMK_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E12CD40)
#define DBFHOCOBPMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12CB20)
#define DBFHOCOBPMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12D020)
#define DBFHOCOBPMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12D080)

inline static constexpr unsigned int DBFHOCOBPMK_TypeDefinitionIndex = 28922;

	class DBFHOCOBPMK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CDMFOJKAHFC*>* LJNOAFHDFJE; // 0x10
		::NIFNAMDEPIL* MOOPIPEJPOO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::CDMFOJKAHFC*>** StaticGet_DGOEMHLCABA()
		{
			return (::Google::Protobuf::FieldCodec_1<::CDMFOJKAHFC*>**)UnitySDK::FromName("", "DBFHOCOBPMK")->GetStaticField(0x226E0);
		}

		static ::Google::Protobuf::MessageParser_1<::DBFHOCOBPMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBFHOCOBPMK*>**)UnitySDK::FromName("", "DBFHOCOBPMK")->GetStaticField(0x226E8);
		}

		// static const ::System::Object DIPCCGAJIAH; // 0x0
		// static const ::System::Object LHLNPAPJAOO; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBFHOCOBPMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBFHOCOBPMK*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFHOCOBPMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBFHOCOBPMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBFHOCOBPMK*>*(*)())((::PBYTE)hIl2Cpp + DBFHOCOBPMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBFHOCOBPMK* Clone()
		{
			return ((::DBFHOCOBPMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_CLONE_OFFSET))(this);
		}

		::NIFNAMDEPIL* MHMIDNIGIDL()
		{
			return ((::NIFNAMDEPIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_MHMIDNIGIDL_OFFSET))(this);
		}

		::System::Void LLGMBJPEMEL(::NIFNAMDEPIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFNAMDEPIL*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_LLGMBJPEMEL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDMFOJKAHFC*>* ELJGHDACIOA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDMFOJKAHFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_ELJGHDACIOA_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBFHOCOBPMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBFHOCOBPMK*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBFHOCOBPMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBFHOCOBPMK*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBFHOCOBPMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
