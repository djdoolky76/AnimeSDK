#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEDPDDJAAIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEDPDDJAAIH_BCLBLIKNPAP_OFFSET UNITYSDK_OFFSET(0x1E6098E0)
#define IEDPDDJAAIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E609E90)
#define IEDPDDJAAIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60A2F0)
#define IEDPDDJAAIH_CJNPMPBNAKL_OFFSET UNITYSDK_OFFSET(0x1E6098D0)
#define IEDPDDJAAIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E609860)
#define IEDPDDJAAIH_CNCBLMFJMPG_OFFSET UNITYSDK_OFFSET(0x1E6098F0)
#define IEDPDDJAAIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6097C0)
#define IEDPDDJAAIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E609770)
#define IEDPDDJAAIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E609A10)
#define IEDPDDJAAIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E609940)
#define IEDPDDJAAIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E609AA0)
#define IEDPDDJAAIH_ILOABDHHGAB_OFFSET UNITYSDK_OFFSET(0x1E6098B0)
#define IEDPDDJAAIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E609700)
#define IEDPDDJAAIH_JLNMPGOBHJE_OFFSET UNITYSDK_OFFSET(0x1E6098C0)
#define IEDPDDJAAIH_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E609910)
#define IEDPDDJAAIH_LIINJFJKKLK_OFFSET UNITYSDK_OFFSET(0x1E609920)
#define IEDPDDJAAIH_LLPAKALDHFE_OFFSET UNITYSDK_OFFSET(0x1E609930)
#define IEDPDDJAAIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60A1D0)
#define IEDPDDJAAIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60A160)
#define IEDPDDJAAIH_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E609900)
#define IEDPDDJAAIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E609760)
#define IEDPDDJAAIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E609BE0)
#define IEDPDDJAAIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E609C40)

inline static constexpr unsigned int IEDPDDJAAIH_TypeDefinitionIndex = 31962;

	class IEDPDDJAAIH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LNGCPELNFBJ; // 0x20
		::System::Boolean FEKPPGIHMAN; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int64 HHCEMNIBHIE; // 0x28
		::System::UInt64 CODDHMMBPND; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LAFIEPLAPED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IEDPDDJAAIH")->GetStaticField(0x46860);
		}

		static ::Google::Protobuf::MessageParser_1<::IEDPDDJAAIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEDPDDJAAIH*>**)UnitySDK::FromName("", "IEDPDDJAAIH")->GetStaticField(0x46868);
		}

		// static const ::System::Object GNCFICOAAAD; // 0x0
		// static const ::System::Object ODLGJOLIOKD; // 0x0
		// static const ::System::Object EAKLHMMJAJC; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object GCBAMAPEDPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEDPDDJAAIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDPDDJAAIH*))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEDPDDJAAIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEDPDDJAAIH*>*(*)())((::PBYTE)hIl2Cpp + IEDPDDJAAIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEDPDDJAAIH* Clone()
		{
			return ((::IEDPDDJAAIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 ILOABDHHGAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_ILOABDHHGAB_OFFSET))(this);
		}

		::System::Void JLNMPGOBHJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_JLNMPGOBHJE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJNPMPBNAKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CJNPMPBNAKL_OFFSET))(this);
		}

		::System::UInt64 BCLBLIKNPAP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_BCLBLIKNPAP_OFFSET))(this);
		}

		::System::Void CNCBLMFJMPG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CNCBLMFJMPG_OFFSET))(this, a1);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::Boolean LIINJFJKKLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_LIINJFJKKLK_OFFSET))(this);
		}

		::System::Void LLPAKALDHFE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_LLPAKALDHFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEDPDDJAAIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEDPDDJAAIH*))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEDPDDJAAIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDPDDJAAIH*))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEDPDDJAAIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
