#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJOHAIPEJDD;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_KELGGNBJGMO_LFDHPMBGNGB_OFFSET UNITYSDK_OFFSET(0x141B12D0)
#define IBHGDJGJLEI_KELGGNBJGMO_MALOMPDNMCC_OFFSET UNITYSDK_OFFSET(0x141B1350)
#define IBHGDJGJLEI_KELGGNBJGMO__CTOR_OFFSET UNITYSDK_OFFSET(0x141B12C0)

inline static constexpr unsigned int IBHGDJGJLEI_KELGGNBJGMO_TypeDefinitionIndex = 55754;

class IBHGDJGJLEI_KELGGNBJGMO : public ::System::Object
{
public:
	::System::Action_1<::HJOHAIPEJDD*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KELGGNBJGMO__CTOR_OFFSET))(this);
	}

	::System::Void LFDHPMBGNGB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KELGGNBJGMO_LFDHPMBGNGB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MALOMPDNMCC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KELGGNBJGMO_MALOMPDNMCC_OFFSET))(this, PIIPCLCCOIG);
	}
};
