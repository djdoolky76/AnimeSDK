#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFFKOJEMIDD;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKDIIGPELCN_CTOR_OFFSET UNITYSDK_OFFSET(0xF870AE0)
#define DKDIIGPELCN_DLDDEGKGIEA_OFFSET UNITYSDK_OFFSET(0xF870970)
#define DKDIIGPELCN_EIKPEMJEKIE_OFFSET UNITYSDK_OFFSET(0xF8708B0)
#define DKDIIGPELCN_FAFNENPNPOC_OFFSET UNITYSDK_OFFSET(0xF870A10)
#define DKDIIGPELCN_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xF870740)
#define DKDIIGPELCN_HHPLMCPDFEG_OFFSET UNITYSDK_OFFSET(0xF8707C0)

inline static constexpr unsigned int DKDIIGPELCN_TypeDefinitionIndex = 73417;

	class DKDIIGPELCN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DFFKOJEMIDD*>* NECKNGBFAJO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDIIGPELCN_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + DKDIIGPELCN_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void HHPLMCPDFEG(::DFFKOJEMIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFKOJEMIDD*))((::PBYTE)hIl2Cpp + DKDIIGPELCN_HHPLMCPDFEG_OFFSET))(this, a1);
		}

		::System::Void EIKPEMJEKIE(::DFFKOJEMIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFKOJEMIDD*))((::PBYTE)hIl2Cpp + DKDIIGPELCN_EIKPEMJEKIE_OFFSET))(this, a1);
		}

		::System::Void DLDDEGKGIEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDIIGPELCN_DLDDEGKGIEA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DFFKOJEMIDD*>* FAFNENPNPOC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DFFKOJEMIDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDIIGPELCN_FAFNENPNPOC_OFFSET))(this);
		}

	};
