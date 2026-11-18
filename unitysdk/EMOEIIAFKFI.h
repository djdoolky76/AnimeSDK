#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANLCALDLHOB;
class PNHPELCKOHH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMOEIIAFKFI_HJLCDADGBMD_OFFSET UNITYSDK_OFFSET(0x132C1CA0)
#define EMOEIIAFKFI_NGPNMEMHHGK_OFFSET UNITYSDK_OFFSET(0x132C2470)
#define EMOEIIAFKFI_OMDNBKECFGA_OFFSET UNITYSDK_OFFSET(0x132C2020)
#define EMOEIIAFKFI_PLANAEBPEAO_OFFSET UNITYSDK_OFFSET(0x132C1DF0)

inline static constexpr unsigned int EMOEIIAFKFI_TypeDefinitionIndex = 94836;

class EMOEIIAFKFI : public ::System::Object
{
public:
	static ::System::Boolean HJLCDADGBMD(::PNHPELCKOHH* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PNHPELCKOHH*))((::PBYTE)hIl2Cpp + EMOEIIAFKFI_HJLCDADGBMD_OFFSET))(GEEHGDABNJF);
	}

	static ::System::Boolean PLANAEBPEAO(::PNHPELCKOHH* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PNHPELCKOHH*))((::PBYTE)hIl2Cpp + EMOEIIAFKFI_PLANAEBPEAO_OFFSET))(GEEHGDABNJF);
	}

	static ::ANLCALDLHOB* NGPNMEMHHGK(::PNHPELCKOHH* GEEHGDABNJF, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CBGJGJDPIDJ)
	{
		return ((::ANLCALDLHOB*(*)(::PNHPELCKOHH*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + EMOEIIAFKFI_NGPNMEMHHGK_OFFSET))(GEEHGDABNJF, CBGJGJDPIDJ);
	}

	static ::System::Int32 OMDNBKECFGA(::PNHPELCKOHH* GEEHGDABNJF)
	{
		return ((::System::Int32(*)(::PNHPELCKOHH*))((::PBYTE)hIl2Cpp + EMOEIIAFKFI_OMDNBKECFGA_OFFSET))(GEEHGDABNJF);
	}
};
