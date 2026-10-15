#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKNPMFDGADK.h"
class AAFIACIMMHE;
class CCEIJBFAOAI;
class CGEOCOPMJGI;
class EILABEFHPCG;
class GGHEGHCAIEH;
class LOLCJIIIHIM;
class OBJANKHLNGO;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define MLKJGIKFFFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AE4D0)
#define MLKJGIKFFFO_EAMMBKNABNJ_OFFSET UNITYSDK_OFFSET(0xB9AE520)
#define MLKJGIKFFFO___SUBMITIMPL_B__5_0_OFFSET UNITYSDK_OFFSET(0xB9AE810)

inline static constexpr unsigned int MLKJGIKFFFO_TypeDefinitionIndex = 79583;

	class MLKJGIKFFFO : public ::IKNPMFDGADK
	{
	public:
		::EILABEFHPCG* AFONPMCCIEL; // 0x68
		::LOLCJIIIHIM* MPFFGNPIDOA; // 0x70
		::GGHEGHCAIEH* IGFAMLHNLPL; // 0x78
		::System::Void _ctor(::EILABEFHPCG* a1, ::LOLCJIIIHIM* a2, ::CCEIJBFAOAI* a3, ::GGHEGHCAIEH* a4, ::AAFIACIMMHE* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::EILABEFHPCG*, ::LOLCJIIIHIM*, ::CCEIJBFAOAI*, ::GGHEGHCAIEH*, ::AAFIACIMMHE*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + MLKJGIKFFFO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* EAMMBKNABNJ()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKJGIKFFFO_EAMMBKNABNJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* __SubmitImpl_b__5_0(::CGEOCOPMJGI* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::CGEOCOPMJGI*))((::PBYTE)hIl2Cpp + MLKJGIKFFFO___SUBMITIMPL_B__5_0_OFFSET))(this, a1);
		}

	};
