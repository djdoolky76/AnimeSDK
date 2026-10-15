#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJEAHAODOHJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAOPBKPKCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB850440)
#define MAOPBKPKCEK_JGEDMOAAGIG_OFFSET UNITYSDK_OFFSET(0xB850350)
#define MAOPBKPKCEK_JLCPCOLBPIF_OFFSET UNITYSDK_OFFSET(0xB8502E0)
#define MAOPBKPKCEK_NJCMKMCGHGI_OFFSET UNITYSDK_OFFSET(0xB850400)

inline static constexpr unsigned int MAOPBKPKCEK_TypeDefinitionIndex = 62022;

	class MAOPBKPKCEK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AJEAHAODOHJ*>* LLLHNLPOOAJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPBKPKCEK_CTOR_OFFSET))(this);
		}

		::System::Void JLCPCOLBPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPBKPKCEK_JLCPCOLBPIF_OFFSET))(this);
		}

		::System::Void JGEDMOAAGIG(::AJEAHAODOHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJEAHAODOHJ*))((::PBYTE)hIl2Cpp + MAOPBKPKCEK_JGEDMOAAGIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::AJEAHAODOHJ*>* NJCMKMCGHGI()
		{
			return ((::System::Collections::Generic::List_1<::AJEAHAODOHJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPBKPKCEK_NJCMKMCGHGI_OFFSET))(this);
		}

	};
