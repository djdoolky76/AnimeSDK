#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FKPOEEENELD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1581AD40)
#define FKPOEEENELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1581AC40)
#define FKPOEEENELD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1581AD70)
#define FKPOEEENELD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1581AD30)

inline static constexpr unsigned int FKPOEEENELD_TypeDefinitionIndex = 74939;

	class FKPOEEENELD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FKPOEEENELD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*))((::PBYTE)hIl2Cpp + FKPOEEENELD_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FKPOEEENELD_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FKPOEEENELD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
