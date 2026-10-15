#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMEGIPHFFDA;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDCIKKPIPKA_CABIFHLBBOF_OFFSET UNITYSDK_OFFSET(0x15C23590)
#define HDCIKKPIPKA_PIOKOOFLFLA_OFFSET UNITYSDK_OFFSET(0x15C23AC0)

inline static constexpr unsigned int HDCIKKPIPKA_TypeDefinitionIndex = 74863;

	class HDCIKKPIPKA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* CABIFHLBBOF(::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*))((::PBYTE)hIl2Cpp + HDCIKKPIPKA_CABIFHLBBOF_OFFSET))(a1);
		}

		static ::System::Void PIOKOOFLFLA(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*))((::PBYTE)hIl2Cpp + HDCIKKPIPKA_PIOKOOFLFLA_OFFSET))(a1, a2);
		}

	};
