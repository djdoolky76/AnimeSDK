#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class MBCCJENLLDA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define MBCCJENLLDA_COMPILE_OFFSET UNITYSDK_OFFSET(0x1B81CCE0)
#define MBCCJENLLDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B81DAD0)
#define MBCCJENLLDA_DMOAKAHGEEM_OFFSET UNITYSDK_OFFSET(0x1B81CC90)
#define MBCCJENLLDA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B81CC20)
#define MBCCJENLLDA_NOHPAKKMHIB_OFFSET UNITYSDK_OFFSET(0x1B81D700)

inline static constexpr unsigned int MBCCJENLLDA_TypeDefinitionIndex = 67022;

	class MBCCJENLLDA : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x10
		::System::UInt32 HCABNNKKNLP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCCJENLLDA_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCCJENLLDA_GET_TAG_OFFSET))(this);
		}

		::MBCCJENLLDA* DMOAKAHGEEM(::System::UInt32 a1)
		{
			return ((::MBCCJENLLDA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBCCJENLLDA_DMOAKAHGEEM_OFFSET))(this, a1);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + MBCCJENLLDA_COMPILE_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* NOHPAKKMHIB(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBCCJENLLDA_NOHPAKKMHIB_OFFSET))(a1);
		}

	};
